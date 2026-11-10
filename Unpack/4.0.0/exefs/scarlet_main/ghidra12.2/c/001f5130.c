/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f5130; name: FUN_001f5130
 */


undefined8 FUN_001f5130(long *param_1,ulong *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  
  lVar4 = *param_1;
  if ((ulong)(*(long *)(lVar4 + 0x10) - *(long *)(lVar4 + 0x20)) < *param_2) {
    uVar3 = 0xfffffdf6;
  }
  else {
    puVar5 = (ulong *)param_2[2];
    *(long *)(lVar4 + 0x18) = *(long *)(lVar4 + 0x18) + -9;
    FUN_001f4614();
    if (*puVar5 != 0) {
      uVar3 = *(undefined8 *)(lVar4 + 0x20);
      lVar6 = 0;
      uVar7 = 0;
      do {
        puVar2 = (undefined8 *)(puVar5[1] + lVar6);
        FUN_001ed514(uVar3,*(undefined2 *)(puVar2 + 1));
        lVar1 = *(long *)(lVar4 + 0x20) + 2;
        *(long *)(lVar4 + 0x20) = lVar1;
        uVar3 = FUN_001ed9b4(lVar1,*puVar2,puVar2[1]);
        *(undefined8 *)(lVar4 + 0x20) = uVar3;
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x10;
      } while (uVar7 < *puVar5);
    }
    uVar3 = 0;
  }
  return uVar3;
}


