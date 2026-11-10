/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028a6628; name: FUN_028a6628
 */


void FUN_028a6628(long param_1,undefined4 *param_2)

{
  char *pcVar1;
  char *pcVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  
  lVar4 = *(long *)(param_2 + 8);
  if ((ulong)((*(long *)(param_2 + 10) - lVar4 >> 3) * -0x5555555555555555) <
      (ulong)*(uint *)(param_1 + 0x10)) {
                    /* WARNING: Subroutine does not return */
    FUN_028a63d0();
  }
  uVar5 = (ulong)(*(uint *)(param_1 + 0x10) - 1);
  if (*(char *)(lVar4 + uVar5 * 0x18 + 0x10) != '\0') {
    plVar3 = (long *)(lVar4 + uVar5 * 0x18);
    pcVar1 = *(char **)(param_2 + 4);
    pcVar6 = (char *)*plVar3;
    pcVar2 = (char *)plVar3[1];
    lVar4 = (long)pcVar2 - (long)pcVar6;
    if (lVar4 <= *(long *)(param_2 + 6) - (long)pcVar1) {
      if (pcVar6 != pcVar2) {
        pcVar7 = pcVar1;
        do {
          if (*pcVar6 != *pcVar7) goto LAB_028a6688;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        } while (pcVar2 != pcVar6);
      }
      *param_2 = 0xfffffc1e;
      *(char **)(param_2 + 4) = pcVar1 + lVar4;
      *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(param_1 + 8);
      return;
    }
  }
LAB_028a6688:
  *param_2 = 0xfffffc1f;
  *(undefined8 *)(param_2 + 0x14) = 0;
  return;
}


