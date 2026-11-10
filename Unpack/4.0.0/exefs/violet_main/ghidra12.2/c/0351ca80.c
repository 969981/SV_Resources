/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0351ca80; name: FUN_0351ca80
 */


void FUN_0351ca80(long *param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  long *local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  if ((*(byte *)((long)param_1 + 0x5a) & 0xe) == 0) {
    if (param_1[7] == 0) {
      if (0 < *param_2) {
        iStack_2c = param_2[1];
        local_48 = param_1 + 5;
        local_40 = 0x1000000;
        local_38 = 0x3f80000000000000;
        local_28 = 0x19;
        local_24 = 0x100;
        local_22 = 0;
        local_30 = *param_2;
        lVar2 = FUN_034e6ab0(*(undefined8 *)PTR_DAT_047e7038,&local_48,0);
        param_1[7] = lVar2;
        if (lVar2 == 0) {
          (**(code **)(*param_1 + 0x60))(local_38._4_4_,param_1,local_40,1);
        }
        else if (param_2[2] != 0) {
          iVar1 = 0;
          if (*(ushort *)PTR_DAT_047e6d08 != 0) {
            iVar1 = param_2[2] / (int)(uint)*(ushort *)PTR_DAT_047e6d08;
          }
          if ((iVar1 < 0) && (*(uint *)(lVar2 + 0x18) <= (uint)-iVar1)) {
            *(undefined4 *)(lVar2 + 0x18) = 0;
          }
          else {
            *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) + iVar1;
          }
        }
      }
    }
    else {
      FUN_034e6c0c(0x3f800000,*(undefined8 *)PTR_DAT_047e7038,param_1[7],0x1000000,*param_2,
                   param_2[1],0);
    }
    (**(code **)(*param_1 + 0x68))(param_1);
  }
  return;
}


