/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028a81e4; name: FUN_028a81e4
 */


char * FUN_028a81e4(undefined8 *param_1,char *param_2,char *param_3,long param_4)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  char *pcVar7;
  long *plVar8;
  long local_68;
  byte local_60 [8];
  ulong local_58;
  long local_50;
  byte local_48 [8];
  ulong local_40;
  undefined1 *local_38;
  
  if ((1 < (long)param_3 - (long)param_2) && (param_3 + -1 != param_2)) {
    pcVar7 = param_2;
    do {
      cVar1 = *pcVar7;
      while (cVar1 != '=') {
        if (param_3 + -2 == pcVar7) goto LAB_028a8274;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 1;
      }
      if (pcVar7[1] == ']') {
        if (pcVar7 != param_3) {
          FUN_028a892c(local_48,param_1,param_2,pcVar7,0);
          if ((local_48[0] & 1) == 0) {
            if (local_48[0] < 2) goto LAB_028a8508;
            puVar6 = (undefined1 *)((ulong)local_48 | 1);
            uVar4 = (ulong)(local_48[0] >> 1);
LAB_028a82b0:
            FUN_028a8c7c(local_60,param_1,puVar6,puVar6 + uVar4,0);
            uVar4 = (ulong)(local_60[0] >> 1);
            if ((local_60[0] & 1) != 0) {
              uVar4 = local_58;
            }
            if (uVar4 == 0) {
              uVar4 = (ulong)(local_48[0] >> 1);
              if ((local_48[0] & 1) != 0) {
                uVar4 = local_40;
              }
              if (uVar4 == 2) {
                puVar6 = (undefined1 *)((ulong)local_48 | 2);
                puVar2 = (undefined1 *)((ulong)local_48 | 1);
                if ((local_48[0] & 1) != 0) {
                  puVar6 = local_38 + 1;
                  puVar2 = local_38;
                }
                FUN_0146bb94(param_4,*puVar2,*puVar6);
              }
              else {
                if (uVar4 != 1) goto LAB_028a8508;
                puVar6 = (undefined1 *)((ulong)local_48 | 1);
                if ((local_48[0] & 1) != 0) {
                  puVar6 = local_38;
                }
                FUN_0146ab00(param_4,*puVar6);
              }
            }
            else {
              FUN_028a8e2c(param_4 + 0x88,local_60);
            }
            if (((local_60[0] & 1) == 0) || (local_50 == 0)) goto LAB_028a82f0;
            local_68 = tpidr_el0;
            plVar8 = *(long **)(local_68 + 0x30);
            param_4 = local_50;
            if (plVar8 == (long *)0x0) {
              param_1 = &DAT_04859000;
              if ((DAT_04859438 & 1) == 0) goto LAB_028a850c;
              goto LAB_028a84b0;
            }
          }
          else {
            if (local_40 != 0) {
              puVar6 = local_38;
              uVar4 = local_40;
              goto LAB_028a82b0;
            }
LAB_028a8508:
            FUN_028a8c70();
LAB_028a850c:
            iVar3 = __cxa_guard_acquire(&DAT_04859438);
            if (iVar3 != 0) {
              param_1[0x86] = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
LAB_028a84b0:
            plVar8 = (long *)param_1[0x86];
            *(long **)(local_68 + 0x30) = plVar8;
          }
          uVar4 = (**(code **)(*plVar8 + 0xf8))(plVar8);
          if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
            (**(code **)(*plVar8 + 0x18))(plVar8,param_4,0,8);
          }
          else {
            FUN_00c48fe8(plVar8,param_4,0,8);
          }
LAB_028a82f0:
          if (((local_48[0] & 1) != 0) && (local_38 != (undefined1 *)0x0)) {
            lVar5 = tpidr_el0;
            plVar8 = *(long **)(lVar5 + 0x30);
            if (plVar8 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar8 = DAT_04859430;
              *(long **)(lVar5 + 0x30) = DAT_04859430;
            }
            uVar4 = (**(code **)(*plVar8 + 0xf8))(plVar8);
            if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
              (**(code **)(*plVar8 + 0x18))(plVar8,local_38,0,8);
            }
            else {
              FUN_00c48fe8(plVar8,local_38,0,8);
            }
          }
          return pcVar7 + 2;
        }
        break;
      }
      pcVar7 = pcVar7 + 1;
    } while (param_3 + -1 != pcVar7);
  }
LAB_028a8274:
                    /* WARNING: Subroutine does not return */
  FUN_028a63c0();
}


