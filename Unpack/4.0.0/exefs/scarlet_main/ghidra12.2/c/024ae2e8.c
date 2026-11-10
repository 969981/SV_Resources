/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024ae2e8; name: FUN_024ae2e8
 */


void FUN_024ae2e8(long *param_1,long *param_2,uint param_3)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  long lVar4;
  
  if (param_3 != 4) {
    if (param_3 < 2) {
      *param_2 = *param_1;
      return;
    }
    if (param_3 != 2) {
      if (param_3 == 3) {
        pcVar2 = (char *)*param_2;
        lVar4 = 0;
        pcVar1 = 
        "(lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)>::n() [T = (lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)]"
        ;
        do {
          if ("static const char *boost::detail::ctti<(lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)>::n() [T = (lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)]"
              [lVar4 + 0x27] == 'T') {
            if (lVar4 == 0x11d) break;
            if ("static const char *boost::detail::ctti<(lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)>::n() [T = (lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)]"
                [lVar4 + 0x28] == ' ') {
              if (lVar4 == 0x11c) break;
              if ("static const char *boost::detail::ctti<(lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)>::n() [T = (lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)]"
                  [lVar4 + 0x29] == '=') {
                if (lVar4 == 0x11b) break;
                if ("static const char *boost::detail::ctti<(lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)>::n() [T = (lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)]"
                    [lVar4 + 0x2a] == ' ') {
                  if (lVar4 == 0x11e) {
                    pcVar1 = 
                    "(lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)>::n() [T = (lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)]"
                    ;
                  }
                  else {
                    pcVar1 = "static const char *boost::detail::ctti<(lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)>::n() [T = (lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)]"
                             + lVar4 + 0x2b;
                  }
                  break;
                }
              }
            }
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 != 0x11e);
        cVar3 = *pcVar2;
        if (cVar3 != '\0') {
          do {
            pcVar2 = pcVar2 + 1;
            if (*pcVar1 != cVar3) break;
            cVar3 = *pcVar2;
            pcVar1 = pcVar1 + 1;
          } while (cVar3 != '\0');
        }
        if (*pcVar1 == cVar3) {
          *param_2 = (long)param_1;
          return;
        }
        *param_2 = 0;
        return;
      }
      lVar4 = 0;
      pcVar1 = 
      "(lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)>::n() [T = (lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)]"
      ;
      do {
        if ("static const char *boost::detail::ctti<(lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)>::n() [T = (lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)]"
            [lVar4 + 0x27] == 'T') {
          if (lVar4 == 0x11d) break;
          if ("static const char *boost::detail::ctti<(lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)>::n() [T = (lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)]"
              [lVar4 + 0x28] == ' ') {
            if (lVar4 == 0x11c) break;
            if ("static const char *boost::detail::ctti<(lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)>::n() [T = (lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)]"
                [lVar4 + 0x29] == '=') {
              if (lVar4 == 0x11b) break;
              if ("static const char *boost::detail::ctti<(lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)>::n() [T = (lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)]"
                  [lVar4 + 0x2a] == ' ') {
                if (lVar4 == 0x11e) {
                  pcVar1 = 
                  "(lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)>::n() [T = (lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)]"
                  ;
                }
                else {
                  pcVar1 = "static const char *boost::detail::ctti<(lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)>::n() [T = (lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)]"
                           + lVar4 + 0x2b;
                }
                break;
              }
            }
          }
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0x11e);
      *param_2 = (long)pcVar1;
      *(undefined2 *)(param_2 + 1) = 0;
    }
    return;
  }
  lVar4 = 0;
  pcVar1 = 
  "(lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)>::n() [T = (lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)]"
  ;
  do {
    if ("static const char *boost::detail::ctti<(lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)>::n() [T = (lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)]"
        [lVar4 + 0x27] == 'T') {
      if (lVar4 == 0x11d) goto LAB_024ae35c;
      if ("static const char *boost::detail::ctti<(lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)>::n() [T = (lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)]"
          [lVar4 + 0x28] == ' ') {
        if (lVar4 == 0x11c) goto LAB_024ae35c;
        if ("static const char *boost::detail::ctti<(lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)>::n() [T = (lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)]"
            [lVar4 + 0x29] == '=') {
          if (lVar4 == 0x11b) goto LAB_024ae35c;
          if ("static const char *boost::detail::ctti<(lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)>::n() [T = (lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)]"
              [lVar4 + 0x2a] == ' ') {
            if (lVar4 == 0x11e) {
              pcVar1 = 
              "(lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)>::n() [T = (lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)]"
              ;
            }
            else {
              pcVar1 = "static const char *boost::detail::ctti<(lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)>::n() [T = (lambda at C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua.bindings/hid/pad.h:100:1)]"
                       + lVar4 + 0x2b;
            }
            goto LAB_024ae35c;
          }
        }
      }
    }
    lVar4 = lVar4 + 1;
    if (lVar4 == 0x11e) {
LAB_024ae35c:
      *param_2 = (long)pcVar1;
      *(undefined2 *)(param_2 + 1) = 0;
      return;
    }
  } while( true );
}


