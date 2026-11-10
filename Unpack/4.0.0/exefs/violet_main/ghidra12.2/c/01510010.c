/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01510010; name: FUN_01510010
 */


void FUN_01510010(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  
  uVar4 = nn::os::GetSystemTick();
  nn::util::ReferSymbol("SDK MW+Nintendo+NintendoWare_Ui2d-13_3_13-Release");
  FUN_00896e34(param_1,param_2,param_3);
  *(undefined **)PTR_DAT_047d2138 = PTR_PTR_047d2140;
  puVar3 = PTR_DAT_047d2148;
  uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  uVar1 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 2;
  uVar2 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)PTR_DAT_047d2148 = uVar4;
  *(uint *)(puVar3 + 4) = uVar1;
  *(uint *)(puVar3 + 8) = uVar2;
  *(uint *)(puVar3 + 0xc) = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
  return;
}


