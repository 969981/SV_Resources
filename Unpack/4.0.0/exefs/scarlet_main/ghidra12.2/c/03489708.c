/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03489708; name: FUN_03489708
 */


void FUN_03489708(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  long *plVar8;
  
  puVar4 = PTR_DAT_047e6fd8;
  if ((param_2 & 1) == 0) {
    FUN_034b87e8(*(undefined8 *)PTR_DAT_047e6fd8,param_1,*(undefined8 *)(param_1 + 0x28));
  }
  else {
    FUN_034b86cc(*(undefined8 *)PTR_DAT_047e6fd8,param_1);
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  if (uVar1 != 0) {
    plVar8 = *(long **)puVar4;
    uVar2 = *(uint *)(plVar8 + 1);
    if (uVar2 != 0) {
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar1 / uVar2;
      }
      for (puVar5 = *(uint **)(*plVar8 + (ulong)(uVar1 - uVar3 * uVar2) * 8); puVar5 != (uint *)0x0;
          puVar5 = *(uint **)(puVar5 + 2)) {
        if (*puVar5 == uVar1) {
          uVar1 = *(uint *)(plVar8 + 4);
          if (uVar1 == 0) {
            return;
          }
          uVar2 = (int)param_1 + 0x3c;
          uVar3 = 0;
          if (uVar1 != 0) {
            uVar3 = uVar2 / uVar1;
          }
          plVar8 = *(long **)(plVar8[3] + (ulong)(uVar2 - uVar3 * uVar1) * 8);
          while( true ) {
            if (plVar8 == (long *)0x0) {
              return;
            }
            if ((*plVar8 == param_1) && ((int)plVar8[1] == 0x3c)) break;
            plVar8 = (long *)plVar8[2];
          }
          if ((param_2 & 1) == 0) {
            puVar6 = puVar5 + 0x12;
            puVar7 = puVar5 + 0x16;
          }
          else {
            puVar6 = puVar5 + 0x16;
            puVar7 = puVar5 + 0x12;
          }
          FUN_034b5144(puVar5,plVar8,puVar6,puVar7);
          return;
        }
      }
    }
  }
  return;
}


