/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017d0b00; name: FUN_017d0b00
 */


void FUN_017d0b00(long param_1,undefined2 param_2,char *param_3)

{
  int iVar1;
  size_t sVar2;
  undefined2 local_38 [4];
  
  sVar2 = strlen(param_3);
  iVar1 = FUN_017d0b6c(local_38,param_1 + 0x44,0x188,param_3,sVar2,0);
  if (iVar1 == 0) {
    *(undefined2 *)(param_1 + 0x40) = param_2;
    *(undefined2 *)(param_1 + 0x42) = local_38[0];
  }
  return;
}


