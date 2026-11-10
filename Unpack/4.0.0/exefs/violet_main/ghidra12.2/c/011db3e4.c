/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011db3e4; name: FUN_011db3e4
 */


void FUN_011db3e4(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined1 local_268;
  undefined8 local_267;
  undefined8 local_25f;
  undefined4 local_257;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar3 = *(long **)(param_1 + 0x60);
    plVar10 = *(long **)(param_1 + 0x58);
    if (*(long **)(param_1 + 0x58) != plVar3) {
      do {
        plVar11 = plVar10 + 0x31;
        while (*plVar10 == 0) {
          plVar3 = (long *)FUN_011dbea0(plVar11,plVar3,plVar10);
          plVar2 = *(long **)(param_1 + 0x60);
          while (plVar2 != plVar3) {
            if ((char)plVar2[-0x2c] != '\0') {
              *(char *)(plVar2 + -0x2c) = '\0';
            }
            plVar9 = plVar2 + -0x31;
            plVar7 = plVar2 + -0x2f;
            plVar2 = plVar9;
            if ((char)*plVar7 != '\0') {
              *(char *)plVar7 = '\0';
            }
          }
          *(long **)(param_1 + 0x60) = plVar3;
          if (plVar10 == plVar3) {
            return;
          }
        }
        uVar4 = FUN_0111b1ec(*(undefined8 *)(param_1 + 0x50));
        if ((uVar4 & 1) != 0) {
          if ((int)plVar10[1] == 3) {
            plVar3 = *(long **)(param_1 + 0x50);
            if (plVar3 != (long *)0x0) {
              memset(&local_268,0,0x200);
              local_268 = 2;
              memcpy((void *)((ulong)&local_268 | 1),(void *)((long)plVar10 + 0x2a),0x15a);
              uVar4 = (**(code **)(*plVar3 + 0x68))(plVar3,&local_268,0x15b,plVar10);
              if ((uVar4 & 1) != 0) {
                lVar5 = FUN_011dbea0(plVar11,*(undefined8 *)(param_1 + 0x60),plVar10);
                lVar1 = *(long *)(param_1 + 0x60);
                while (lVar1 != lVar5) {
                  if (*(char *)(lVar1 + -0x160) != '\0') {
                    *(char *)(lVar1 + -0x160) = '\0';
                  }
                  lVar8 = lVar1 + -0x188;
                  pcVar6 = (char *)(lVar1 + -0x178);
                  lVar1 = lVar8;
                  if (*pcVar6 != '\0') {
                    *pcVar6 = '\0';
                  }
                }
                goto LAB_011db688;
              }
            }
          }
          else if ((int)plVar10[1] == 1) {
            plVar3 = *(long **)(param_1 + 0x50);
            if (plVar3 != (long *)0x0) {
              memset(&local_268,0,0x200);
              local_268 = 1;
              local_257 = *(undefined4 *)((long)plVar10 + 0x24);
              local_25f = *(undefined8 *)((long)plVar10 + 0x1c);
              local_267 = *(undefined8 *)((long)plVar10 + 0x14);
              uVar4 = (**(code **)(*plVar3 + 0x68))(plVar3,&local_268,0x15,plVar10);
              if ((uVar4 & 1) != 0) {
                lVar5 = FUN_011dbea0(plVar11,*(undefined8 *)(param_1 + 0x60),plVar10);
                lVar1 = *(long *)(param_1 + 0x60);
                while (lVar1 != lVar5) {
                  if (*(char *)(lVar1 + -0x160) != '\0') {
                    *(char *)(lVar1 + -0x160) = '\0';
                  }
                  lVar8 = lVar1 + -0x188;
                  pcVar6 = (char *)(lVar1 + -0x178);
                  lVar1 = lVar8;
                  if (*pcVar6 != '\0') {
                    *pcVar6 = '\0';
                  }
                }
                goto LAB_011db688;
              }
            }
          }
          else {
            lVar5 = FUN_011dbea0(plVar11,*(undefined8 *)(param_1 + 0x60),plVar10);
            lVar1 = *(long *)(param_1 + 0x60);
            while (lVar1 != lVar5) {
              if (*(char *)(lVar1 + -0x160) != '\0') {
                *(char *)(lVar1 + -0x160) = '\0';
              }
              lVar8 = lVar1 + -0x188;
              pcVar6 = (char *)(lVar1 + -0x178);
              lVar1 = lVar8;
              if (*pcVar6 != '\0') {
                *pcVar6 = '\0';
              }
            }
LAB_011db688:
            *(long *)(param_1 + 0x60) = lVar5;
            plVar11 = plVar10;
          }
        }
        plVar3 = *(long **)(param_1 + 0x60);
        plVar10 = plVar11;
      } while (plVar11 != plVar3);
    }
  }
  return;
}


