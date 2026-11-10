/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011901d8; name: FUN_011901d8
 */


void FUN_011901d8(long param_1,long *param_2,void *param_3,int param_4)

{
  long lVar1;
  long *plVar2;
  size_t sVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  size_t __n;
  long local_70;
  long *local_68;
  size_t local_60;
  undefined8 local_58;
  
  __n = (size_t)param_4;
  local_70 = (**(code **)(*param_2 + 0x10))(param_2,__n,8);
  local_58 = 8;
  local_68 = param_2;
  local_60 = __n;
  FUN_011902e4(param_1 + 0x70,&local_70);
  uVar4 = local_58;
  sVar3 = local_60;
  plVar2 = local_68;
  lVar1 = local_70;
  local_70 = 0;
  if (lVar1 != 0) {
    uVar5 = (**(code **)(*local_68 + 0xf8))(local_68);
    if ((uVar5 & 1) != 0) {
      lVar6 = FUN_00c4e600();
      if (0 < *(int *)(lVar6 + 0x12c8)) {
        FUN_00c48fe8(plVar2,lVar1,sVar3,uVar4);
        goto LAB_01190240;
      }
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1,sVar3,uVar4);
  }
LAB_01190240:
  memcpy(*(void **)(param_1 + 0x70),param_3,__n);
  FUN_0118dcb4(param_1,param_2,(long)*(uint **)(param_1 + 0x70) + (ulong)**(uint **)(param_1 + 0x70)
              );
  return;
}


