/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ccc4e8; name: FUN_00ccc4e8
 */


void FUN_00ccc4e8(long param_1,char *param_2,long param_3,uint param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  if (*param_2 != '\0') {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x6030) + (ulong)*(uint *)(param_2 + 4) * 0x20);
    uStack_60 = *(undefined8 *)(param_1 + 8);
    local_68 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_48 = 0;
    local_58 = 0x1fffffffffffffff;
    uStack_50 = 0;
    if (param_4 != 0) {
      uVar3 = (ulong)param_4;
      plVar4 = (long *)(param_3 + 8);
      do {
        lVar1 = 0;
        if ((char)plVar4[-1] != '\0') {
          lVar1 = *plVar4;
        }
        local_80 = *(undefined8 *)(lVar1 + 0x40);
        FUN_00ccc5b4(&local_78,&local_80);
        uVar3 = uVar3 - 1;
        plVar4 = plVar4 + 2;
      } while (uVar3 != 0);
    }
    FUN_00ccca8c(uVar2,param_1 + 0x10,param_3,local_78,param_4);
    FUN_00ccc5c8(&local_78);
  }
  return;
}


