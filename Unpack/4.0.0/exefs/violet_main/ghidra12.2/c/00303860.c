/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00303860; name: FUN_00303860
 */


undefined8
FUN_00303860(long param_1,long param_2,undefined8 param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  undefined8 uVar2;
  void *local_18;
  
  uVar2 = 2;
  if ((param_1 != 0) && (param_2 != 0)) {
    local_18 = (void *)0x0;
    iVar1 = FUN_00304a40(param_2,param_3,param_4 & 1,param_5 & 1,param_6 & 1,param_1 + 8,&local_18);
    if (iVar1 == 0) {
      FUN_00368450(param_1 + 0x10);
      uVar2 = FUN_00303a90();
      *(undefined8 *)(param_1 + 0x140) = uVar2;
      uVar2 = FUN_0038c780();
      *(undefined8 *)(param_1 + 0x138) = uVar2;
      uVar2 = FUN_00303aa0(*(undefined8 *)(param_1 + 8));
      *(undefined8 *)(param_1 + 0x148) = uVar2;
      *(undefined8 *)(param_1 + 0x158) = 8;
      uVar2 = FUN_0038c780(0x80);
      *(undefined8 *)(param_1 + 0x150) = uVar2;
      return 0;
    }
    free(local_18);
    uVar2 = 7;
  }
  return uVar2;
}


