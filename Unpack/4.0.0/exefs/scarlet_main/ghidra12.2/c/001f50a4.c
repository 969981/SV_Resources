/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f50a4; name: FUN_001f50a4
 */


undefined8 FUN_001f50a4(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *param_1;
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + -9;
  FUN_001f4614();
  FUN_001ed514(*(undefined8 *)(lVar2 + 0x20),*(undefined2 *)(puVar1 + 1));
  *(long *)(lVar2 + 0x20) = *(long *)(lVar2 + 0x20) + 2;
  FUN_001f4310(param_1,*puVar1,puVar1[1]);
  FUN_001f4310(param_1,puVar1[2],puVar1[3]);
  return 0;
}


