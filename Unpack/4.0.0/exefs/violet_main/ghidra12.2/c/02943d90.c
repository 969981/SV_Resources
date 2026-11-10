/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02943d90; name: FUN_02943d90
 */


bool FUN_02943d90(long param_1,undefined4 param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  int *piVar4;
  
  piVar4 = (int *)FUN_011e2dd4(*(undefined8 *)
                                (*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x290) + 8) + 0x50));
  if (piVar4 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *piVar4;
    if (4 < iVar1) {
      iVar1 = 0;
    }
  }
  bVar2 = FUN_014f5f74(*(undefined8 *)(param_1 + 0x18),iVar1);
  bVar3 = FUN_0293d9d0(param_1,param_2);
  return bVar2 < bVar3;
}


