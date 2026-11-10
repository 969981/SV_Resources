/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03410d30; name: FUN_03410d30
 */


undefined8 FUN_03410d30(void)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  
  puVar4 = PTR_DAT_047e6cb8;
  if (*(char *)(DAT_048af280 + 0x100) != '\0') {
    puVar5 = *(undefined8 **)PTR_DAT_047e6cb8;
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0xf0);
      if (puVar5 == (undefined8 *)0x0) {
        *(undefined8 *)puVar4 = 0;
        goto LAB_03410dfc;
      }
      *puVar5 = &PTR_LAB_047bf468;
      puVar5[1] = 0;
      puVar3 = PTR_DAT_047e6958;
      lVar8 = *(long *)(PTR_DAT_047e6958 + 8);
      puVar5[2] = 0;
      puVar5[3] = lVar8;
      plVar7 = (long *)(puVar3 + 0x10);
      if (*(long *)(puVar3 + 0x10) != 0) {
        plVar7 = (long *)(lVar8 + 0x10);
      }
      *plVar7 = (long)puVar5;
      *(undefined8 **)(puVar3 + 8) = puVar5;
      *(int *)puVar3 = *(int *)puVar3 + 1;
      *puVar5 = &PTR_FUN_047bf440;
      puVar5[8] = 0;
      puVar5[9] = 0;
      puVar5[0xc] = 0;
      puVar5[0xd] = 0;
      puVar5[0x12] = 0;
      puVar5[0x13] = 0;
      puVar5[0x16] = 0;
      puVar5[0x17] = 0;
      puVar5[0x1a] = 0;
      puVar5[0x1b] = 0;
      *(undefined8 **)puVar4 = puVar5;
      *(undefined2 *)(puVar5 + 0x1c) = 0x101;
    }
    if (*(int *)(puVar5 + 0x1b) != 0) {
      plVar7 = (long *)puVar5[0x1a];
      goto LAB_03410e04;
    }
  }
LAB_03410dfc:
  plVar7 = (long *)(DAT_048af280 + 0xf8);
LAB_03410e04:
  uVar1 = *(uint *)(*(long *)PTR_DAT_047e6cc0 + 0x38);
  if (uVar1 != 0) {
    uVar2 = 0;
    uVar6 = (uint)*plVar7;
    if (uVar1 != 0) {
      uVar2 = uVar6 / uVar1;
    }
    for (plVar9 = *(long **)(*(long *)(*(long *)PTR_DAT_047e6cc0 + 0x30) +
                            (ulong)(uVar6 - uVar2 * uVar1) * 8); plVar9 != (long *)0x0;
        plVar9 = (long *)*plVar9) {
      if (plVar9[1] == *plVar7) {
        if (plVar9[2] == 0) {
          return 0;
        }
        return *(undefined8 *)(plVar9[2] + 0x68);
      }
    }
  }
  return 0;
}


