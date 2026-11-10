/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034be914; name: FUN_034be914
 */


void FUN_034be914(long param_1,ulong param_2,undefined4 param_3)

{
  ulong *puVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  char local_14 [4];
  
  puVar5 = *(ulong **)(param_1 + 8);
  if (puVar5 != (ulong *)0x0) {
    local_14[0] = '\0';
    if ((*(long *)PTR_DAT_047e6fd8 == 0) ||
       ((FUN_034b8438(*(long *)PTR_DAT_047e6fd8,param_1,param_2 & 0xffffffff,param_3,local_14),
        local_14[0] == '\0' && (puVar5 = *(ulong **)(param_1 + 8), puVar5 != (ulong *)0x0)))) {
      *puVar5 = *puVar5 & (1L << (param_2 & 0x3f) ^ 0xffffffffffffffffU);
      FUN_034be24c();
      puVar3 = PTR_DAT_047e2fd0;
      plVar10 = *(long **)(param_1 + 8);
      uVar2 = *(uint *)(plVar10 + 3);
      if ((*plVar10 == 0) && (uVar2 == 0)) {
        if (plVar10[2] != 0) {
          *(undefined4 *)(plVar10 + 3) = 0;
          (**(code **)(puVar3 + 0x30))(0);
          plVar10[2] = 0;
          *(undefined4 *)((long)plVar10 + 0x1c) = 0;
        }
        (**(code **)(puVar3 + 0x30))(2,plVar10);
        *(undefined8 *)(param_1 + 8) = 0;
      }
      else {
        plVar10[1] = -1;
        if (uVar2 != 0) {
          puVar5 = (ulong *)plVar10[2];
          uVar9 = (ulong)uVar2 * 0x10 - 0x10;
          uVar6 = (uVar9 >> 4) + 1;
          uVar7 = uVar6 & 3;
          if (uVar9 < 0x30) {
            uVar6 = 0xffffffffffffffff;
          }
          else {
            lVar8 = -(uVar6 & 0x1ffffffffffffffc);
            uVar6 = 0xffffffffffffffff;
            do {
              uVar9 = *puVar5;
              plVar10[1] = uVar9 & uVar6;
              uVar6 = puVar5[2] & uVar9 & uVar6;
              plVar10[1] = uVar6;
              uVar6 = puVar5[4] & uVar6;
              plVar10[1] = uVar6;
              puVar1 = puVar5 + 6;
              puVar5 = puVar5 + 8;
              uVar6 = *puVar1 & uVar6;
              lVar8 = lVar8 + 4;
              plVar10[1] = uVar6;
            } while (lVar8 != 0);
          }
          if (uVar7 != 0) {
            lVar8 = -uVar7;
            do {
              uVar6 = *puVar5 & uVar6;
              bVar4 = lVar8 != -1;
              lVar8 = lVar8 + 1;
              plVar10[1] = uVar6;
              puVar5 = puVar5 + 2;
            } while (bVar4);
          }
        }
      }
    }
  }
  return;
}


