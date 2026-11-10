/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0071ece8; name: FUN_0071ece8
 */


void FUN_0071ece8(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    puVar1 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x30);
    if (puVar1 == (undefined8 *)0x0) goto LAB_0071ed94;
    *puVar1 = 0;
    puVar1[2] = puVar1;
    puVar1[5] = 0;
    puVar4 = puVar1 + 4;
    *puVar4 = 0;
    puVar2 = (undefined8 *)FUN_0049e6c0(0x40);
  }
  else {
    if (*(long *)(lVar3 + 0x70) != 0) {
      FUN_00520d08(lVar3,0,0x30);
    }
    puVar1 = (undefined8 *)FUN_00520c00(lVar3,0x30);
    *puVar1 = 0;
    puVar1[2] = puVar1;
    puVar4 = puVar1 + 4;
    *puVar4 = 0;
    puVar1[5] = lVar3;
    if (*(long *)(lVar3 + 0x70) != 0) {
      FUN_00520d08(lVar3,0,0x40);
    }
    puVar2 = (undefined8 *)FUN_00520c00(lVar3,0x40);
  }
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  *puVar4 = puVar2;
  puVar1[3] = 8;
  puVar1[1] = 8;
LAB_0071ed94:
  param_1[2] = (long)puVar1;
  return;
}


