/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00285d40; name: FUN_00285d40
 */


byte * FUN_00285d40(undefined8 param_1)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)FUN_00376bf0(param_1,&LAB_00285dc0);
  if (pbVar2 != (byte *)0x0) {
    return pbVar2;
  }
  pbVar2 = (byte *)FUN_0038c780(1);
  if (*(code **)PTR_DAT_047cc5e0 != (code *)0x0) {
    bVar1 = (**(code **)PTR_DAT_047cc5e0)(param_1);
    *pbVar2 = bVar1 & 1;
  }
  FUN_00376c90(param_1,&LAB_00285dc0,pbVar2);
  return pbVar2;
}


