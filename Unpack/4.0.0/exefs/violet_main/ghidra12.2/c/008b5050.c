/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008b5050; name: FUN_008b5050
 */


uint * FUN_008b5050(long param_1,char *param_2)

{
  int iVar1;
  uint *puVar2;
  ulong uVar3;
  char acStack_88 [72];
  
  if (*(short *)(param_1 + 8) != 0) {
    uVar3 = 0;
    puVar2 = (uint *)(param_1 + 0xc);
    do {
      FUN_008c6f74(acStack_88,0x47,param_1 + 0xc + (ulong)*puVar2,puVar2);
      iVar1 = strcmp(acStack_88,param_2);
      if (iVar1 == 0) {
        return puVar2;
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 4;
    } while (uVar3 < *(ushort *)(param_1 + 8));
  }
  return (uint *)0x0;
}


