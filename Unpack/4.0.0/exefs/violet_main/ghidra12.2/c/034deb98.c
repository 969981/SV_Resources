/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034deb98; name: FUN_034deb98
 */


undefined4 FUN_034deb98(undefined8 param_1,void *param_2,uint param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  float fVar9;
  undefined1 auStack_50 [48];
  
  if (param_4 == 1) {
    puVar5 = (uint *)**(undefined8 **)PTR_DAT_047e7050;
    uVar2 = *(uint *)(*(undefined8 **)PTR_DAT_047e7050 + 1);
    if ((uVar2 == 0) || (*puVar5 == param_3)) {
      puVar7 = puVar5;
    }
    else {
      lVar6 = (ulong)uVar2 * 0x10;
      puVar8 = puVar5;
      do {
        lVar6 = lVar6 + -0x10;
        if (lVar6 == 0) {
          return 0;
        }
        puVar7 = puVar8 + 4;
        puVar1 = puVar8 + 4;
        puVar8 = puVar7;
      } while (*puVar1 != param_3);
    }
    if (puVar7 != puVar5 + (ulong)uVar2 * 4) {
      return *(undefined4 *)(*(long *)(puVar7 + 2) + 4);
    }
  }
  else {
    uVar2 = *(uint *)(*(long **)PTR_DAT_047e7098 + 1);
    if (uVar2 != 0) {
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = param_3 / uVar2;
      }
      for (puVar5 = *(uint **)(**(long **)PTR_DAT_047e7098 + (ulong)(param_3 - uVar3 * uVar2) * 8);
          puVar5 != (uint *)0x0; puVar5 = *(uint **)(puVar5 + 2)) {
        if (*puVar5 == param_3) {
          memcpy(auStack_50,param_2,0x30);
          if (puVar5[8] == 0) {
            puVar4 = (undefined4 *)FUN_034825d4(puVar5 + 0xe,auStack_50);
            if (puVar4 == (undefined4 *)0x0) {
              return 0;
            }
            return *puVar4;
          }
          fVar9 = (float)FUN_034b8088(*(undefined8 *)PTR_DAT_047e6fd8,puVar5,auStack_50);
          if ((uint)(int)fVar9 < puVar5[6]) {
            return *(undefined4 *)(*(long *)(puVar5 + 4) + (ulong)(uint)(int)fVar9 * 4);
          }
          return 0;
        }
      }
    }
  }
  return 0;
}


