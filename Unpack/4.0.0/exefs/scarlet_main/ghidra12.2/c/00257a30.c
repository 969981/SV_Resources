/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00257a30; name: _INIT_4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_DAT_047cc238;
  *(undefined8 *)PTR_DAT_047cc238 = 0x10000;
  uVar2 = _UNK_03cab338;
  uVar1 = _DAT_03cab330;
  *(undefined4 *)(puVar3 + 8) = 0x80000000;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  strncpy(puVar3 + 0x20,"nn.npln.GrpcDispatcher",0x1f);
  puVar3[0x3f] = 0;
  return;
}


