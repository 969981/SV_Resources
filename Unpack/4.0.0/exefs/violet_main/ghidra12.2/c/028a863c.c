/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028a863c; name: FUN_028a863c
 */


char * FUN_028a863c(undefined8 param_1,char *param_2,char *param_3,ulong *param_4)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  ulong unaff_x21;
  long *unaff_x22;
  long local_58;
  ulong local_50;
  ulong uStack_48;
  ulong local_40;
  undefined2 local_34;
  
  local_34 = 0x5d2e;
  if ((1 < (long)param_3 - (long)param_2) && (param_3 + -1 != param_2)) {
    pcVar5 = param_2;
    do {
      cVar1 = *pcVar5;
      while (cVar1 != '.') {
        if (param_3 + -2 == pcVar5) goto LAB_028a86c8;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 1;
      }
      if (pcVar5[1] == ']') {
        if (pcVar5 != param_3) {
          FUN_028a892c(&local_50,param_1,param_2,pcVar5,0);
          if ((*param_4 & 1) == 0) goto LAB_028a8740;
          unaff_x21 = param_4[2];
          if (unaff_x21 == 0) goto LAB_028a8740;
          lVar4 = tpidr_el0;
          unaff_x22 = *(long **)(lVar4 + 0x30);
          if (unaff_x22 == (long *)0x0) {
            unaff_x22 = &DAT_04859000;
            local_58 = lVar4;
            if ((DAT_04859438 & 1) == 0) goto LAB_028a87e8;
            goto LAB_028a87c4;
          }
          while( true ) {
            uVar3 = (**(code **)(*unaff_x22 + 0xf8))(unaff_x22);
            if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
              (**(code **)(*unaff_x22 + 0x18))(unaff_x22,unaff_x21,0,8);
            }
            else {
              FUN_00c48fe8(unaff_x22,unaff_x21,0,8);
            }
LAB_028a8740:
            *param_4 = local_50;
            param_4[1] = uStack_48;
            param_4[2] = local_40;
            uVar3 = (local_50 & 0xff) >> 1;
            if ((local_50 & 1) != 0) {
              uVar3 = uStack_48;
            }
            if (uVar3 - 1 < 2) break;
            FUN_028a8c70();
LAB_028a87e8:
            iVar2 = __cxa_guard_acquire(&DAT_04859438);
            if (iVar2 != 0) {
              unaff_x22[0x86] = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
LAB_028a87c4:
            unaff_x22 = (long *)unaff_x22[0x86];
            *(long **)(local_58 + 0x30) = unaff_x22;
          }
          return pcVar5 + 2;
        }
        break;
      }
      pcVar5 = pcVar5 + 1;
    } while (param_3 + -1 != pcVar5);
  }
LAB_028a86c8:
                    /* WARNING: Subroutine does not return */
  FUN_028a63c0();
}


