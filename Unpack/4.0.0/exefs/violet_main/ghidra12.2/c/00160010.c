/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00160010; name: FUN_00160010
 */


uint FUN_00160010(long param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  
  lVar5 = 0;
  uVar3 = 0;
  uVar2 = 0;
  uVar4 = 0;
  uVar6 = 0;
  do {
    puVar1 = (uint *)(param_1 + lVar5);
    lVar5 = lVar5 + 0x10;
    if (uVar3 <= *puVar1) {
      uVar3 = *puVar1;
    }
    if (uVar6 <= puVar1[1]) {
      uVar6 = puVar1[1];
    }
    if (uVar4 <= puVar1[2]) {
      uVar4 = puVar1[2];
    }
    if (uVar2 <= puVar1[3]) {
      uVar2 = puVar1[3];
    }
  } while (lVar5 != 0x400);
  if (uVar3 <= uVar6) {
    uVar3 = uVar6;
  }
  if (uVar4 <= uVar2) {
    uVar4 = uVar2;
  }
  if (uVar3 <= uVar4) {
    uVar3 = uVar4;
  }
  return uVar3;
}


