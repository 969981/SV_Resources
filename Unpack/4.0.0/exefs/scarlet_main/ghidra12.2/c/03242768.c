/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03242768; name: FUN_03242768
 */


void FUN_03242768(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)*param_1;
  uVar1 = puVar3[2];
  uVar2 = puVar3[3];
  FUN_031c6c18(param_2,"%.8x-%.4x-%.4x-%.2x%.2x-%.2x%.2x%.2x%.2x%.2x%.2x",*puVar3,puVar3[1] & 0xffff
               ,(uint)puVar3[1] >> 0x10,uVar1 & 0xff,uVar1 >> 8 & 0xff,uVar1 >> 0x10 & 0xff,
               uVar1 >> 0x18,uVar2 & 0xff,uVar2 >> 8 & 0xff,uVar2 >> 0x10 & 0xff,uVar2 >> 0x18);
  return;
}


