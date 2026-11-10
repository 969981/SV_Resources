/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00300b00; name: FUN_00300b00
 */


undefined8
FUN_00300b00(long param_1,undefined8 param_2,uint param_3,uint param_4,ulong *param_5,
            undefined8 *param_6)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  void *local_60;
  undefined8 local_58;
  undefined8 local_48;
  
  if ((param_1 != 0) && (param_6 != (undefined8 *)0x0)) {
    local_60 = (void *)0x0;
    puVar2 = (undefined8 *)FUN_0038c7b0(0x68);
    local_48 = 0;
    local_58 = 0;
    iVar1 = FUN_00301260(param_1,param_2,0xc,0x10,param_4 & 1,&local_48,&local_60);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_00301260(param_1,param_2,0xc,0x10,param_4 & 1,&local_58,&local_60), iVar1 == 0))
    {
      uVar3 = 8;
      if ((param_4 & 1) == 0) {
        uVar3 = 5;
      }
      iVar1 = FUN_00302110(local_48,param_3 & 1,uVar3,puVar2 + 1,&local_60);
      if ((iVar1 == 0) &&
         (iVar1 = FUN_00302b90(local_58,param_3 & 1,uVar3,puVar2 + 2,&local_60), iVar1 == 0)) {
        if (param_5 == (ulong *)0x0) {
          uVar4 = 0x4000;
        }
        else {
          uVar4 = *param_5;
          if (0xfffff < uVar4) {
            uVar4 = 0x100000;
          }
          if (uVar4 < 0x401) {
            uVar4 = 0x400;
          }
          *param_5 = uVar4;
        }
        puVar2[9] = uVar4;
        puVar2[10] = uVar4;
        puVar2[7] = 0;
        puVar2[8] = 0;
        uVar3 = FUN_0038c780(uVar4);
        puVar2[5] = uVar3;
        uVar3 = FUN_0038c780(uVar4);
        puVar2[6] = uVar3;
        uVar3 = FUN_00301200(puVar2[1]);
        puVar2[0xb] = uVar3;
        uVar3 = FUN_00302d30();
        puVar2[3] = uVar3;
        uVar3 = FUN_00302ef0();
        puVar2[4] = uVar3;
        *puVar2 = &PTR_LAB_044944a0;
        *param_6 = puVar2;
        return 0;
      }
    }
    free(local_60);
  }
  return 7;
}


