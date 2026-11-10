/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0351ce0c; name: FUN_0351ce0c
 */


void FUN_0351ce0c(long *param_1,int *param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  long *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  if (((param_3 & 1) == 0) &&
     (iVar1 = *(ushort *)(param_1 + 0xb) - 1, *(ushort *)(param_1 + 0xb) != 0 && iVar1 != 0)) {
    *(short *)(param_1 + 0xb) = (short)iVar1;
  }
  else {
    *(undefined2 *)(param_1 + 0xb) = 0;
    if (param_1[8] == 0) {
      if (*param_2 < 1) {
        *(undefined4 *)(param_1 + 10) = 0x3f800000;
        (**(code **)(*param_1 + 0x28))(0x3f800000,param_1);
      }
      else {
        iStack_2c = param_2[1];
        local_48 = param_1 + 5;
        local_38 = (undefined4)param_1[10];
        local_40 = 0x8000000;
        local_34 = 0x3f800000;
        local_28 = 0x19;
        local_24 = 0x100;
        local_22 = 0;
        local_30 = *param_2;
        lVar2 = FUN_034e6ab0(*(undefined8 *)PTR_DAT_047e7038,&local_48,0);
        param_1[8] = lVar2;
        if (lVar2 == 0) {
          (**(code **)(*param_1 + 0x60))(local_34,param_1,local_40,1);
        }
      }
    }
    else {
      FUN_034e6c0c(0x3f800000,*(undefined8 *)PTR_DAT_047e7038,param_1[8],0x8000000,*param_2,
                   param_2[1],0);
    }
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  return;
}


