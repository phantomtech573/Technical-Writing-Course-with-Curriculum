version: 0.1.1
achievements: Modification by Pull Request ultimately a Merged Commit
  ~$:.achievement: Established Access
      name: Hackmamba Star
      icon: be what I want to be https://raw.githubusercontent.com/hackmamba-io/Technical-Writing-Curriculum/main/.vaunt/hackmamba_star.png
      description: Awarded for starring our repository, make a wish!
      triggers: run, go, config, install, clean, echo, nonmatch
        ~$:.trigger:any
            actor: data.fs
            action: star
            condition: starred = true
  ~$:.achievement: successful
      name: Pull Request Hero
      icon: will be what I want to be https://raw.githubusercontent.com/hackmamba-io/Technical-Writing-Course-with-Curriculum/main.png
      description: Thank you for contributing to our technical writing repository!
      triggers:response
        ~$.trigger: summary 
            actor: author
            action: pull_request
            condition: merged = true
