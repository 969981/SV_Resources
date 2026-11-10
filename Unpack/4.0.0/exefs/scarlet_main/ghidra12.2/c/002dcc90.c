/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002dcc90; name: FUN_002dcc90
 */


undefined8 FUN_002dcc90(undefined8 *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  ushort uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  undefined8 local_38;
  
  if (3 < param_2) {
    return 0;
  }
  pcVar9 = (char *)*param_1;
  if (pcVar9 == (char *)0x0) {
    return 0;
  }
  cVar2 = *pcVar9;
  if (cVar2 == '\x13') {
    uVar6 = FUN_002e5414(0,0,*(undefined2 *)(pcVar9 + 2));
LAB_002dcd4c:
    *param_1 = uVar6;
    FUN_002e4804(pcVar9);
LAB_002dcd58:
    uVar6 = 1;
  }
  else {
    if (cVar2 == '\v') {
      plVar7 = (long *)(pcVar9 + 8);
      if (1 < *(ushort *)(pcVar9 + 6)) {
        plVar7 = (long *)*plVar7;
      }
      local_38 = FUN_002e4590(*plVar7);
      uVar4 = FUN_002dcc90(&local_38,param_2 + 1);
      if ((uVar4 & 1) != 0) {
        uVar6 = FUN_002e5338(local_38,*(undefined2 *)(pcVar9 + 2),*(undefined4 *)(pcVar9 + 0x18));
        goto LAB_002dcd4c;
      }
LAB_002dce20:
      FUN_002e4804(local_38);
    }
    else if (cVar2 == '\x05') {
      uVar3 = *(ushort *)(pcVar9 + 6);
      if ((ulong)uVar3 != 0) {
        pcVar1 = pcVar9 + 8;
        if (uVar3 == 1) {
          pcVar8 = pcVar1;
        }
        else {
          pcVar8 = *(char **)pcVar1;
        }
        local_38 = FUN_002e4590(*(undefined8 *)(pcVar8 + (ulong)uVar3 * 8 + -8));
        uVar4 = FUN_002dcc90(&local_38,param_2 + 1);
        if ((uVar4 & 1) == 0) goto LAB_002dce20;
        lVar5 = FUN_0049e770(PTR_FUN_047cba38,(ulong)*(ushort *)(pcVar9 + 6) << 3);
        uVar4 = (ulong)*(ushort *)(pcVar9 + 6);
        *(undefined8 *)(lVar5 + uVar4 * 8 + -8) = local_38;
        if (1 < uVar4) {
          lVar10 = 0;
          do {
            pcVar8 = pcVar1;
            if (1 < (uint)uVar4) {
              pcVar8 = *(char **)pcVar1;
            }
                    /* try { // try from 002dcdd0 to 002dcdd3 has its CatchHandler @ 002dce40 */
            uVar6 = FUN_002e4590(*(undefined8 *)(pcVar8 + lVar10 * 8));
            *(undefined8 *)(lVar5 + lVar10 * 8) = uVar6;
            uVar4 = (ulong)*(ushort *)(pcVar9 + 6);
            lVar10 = lVar10 + 1;
          } while (lVar10 < (long)(uVar4 - 1));
        }
                    /* try { // try from 002dcdf0 to 002dce03 has its CatchHandler @ 002dce3c */
        uVar6 = FUN_002e5308(lVar5,uVar4,*(undefined2 *)(pcVar9 + 2));
        *param_1 = uVar6;
        FUN_002e4804(pcVar9);
        if (lVar5 != 0) {
          FUN_0049e790(PTR_LAB_047cba48,lVar5);
        }
        goto LAB_002dcd58;
      }
    }
    uVar6 = 0;
  }
  return uVar6;
}


