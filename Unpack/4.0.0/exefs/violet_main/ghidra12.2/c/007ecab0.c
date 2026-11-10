/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ecab0; name: FUN_007ecab0
 */


void FUN_007ecab0(int *param_1,long param_2,undefined1 param_3,undefined8 param_4,undefined2 param_5
                 ,undefined8 param_6)

{
  long lVar1;
  int iVar2;
  char cVar3;
  undefined1 *puVar4;
  long lVar5;
  long *plVar6;
  undefined1 local_b0 [8];
  undefined8 local_a8;
  undefined2 local_a0;
  undefined8 local_98;
  undefined1 local_90 [8];
  undefined8 local_88;
  undefined2 local_80;
  undefined8 local_78;
  undefined4 local_70 [4];
  undefined4 local_58 [2];
  
  if (*(char *)(param_2 + 0x28) == '\0') {
    local_70[0] = 0x10408;
  }
  else {
    lVar1 = param_2 + 0x10;
    if (*(long *)(param_2 + 0x18) != lVar1) {
      iVar2 = *(int *)(param_2 + 0x24);
      plVar6 = (long *)(*(long *)(param_2 + 0x18) - (long)iVar2);
      do {
        *param_1 = 0;
        local_70[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)(param_1 + 1),(Result *)local_70);
        cVar3 = (**(code **)(*plVar6 + 0x20))(plVar6);
        if (cVar3 == ',') {
          local_a8 = 0;
          local_a0 = 0;
          local_98 = 0;
          puVar4 = local_b0;
          local_b0[0] = param_3;
        }
        else {
          puVar4 = local_90;
          local_90[0] = param_3;
          local_88 = param_4;
          local_80 = param_5;
          local_78 = param_6;
        }
        (**(code **)(*plVar6 + 0x40))(local_70,plVar6,puVar4);
        FUN_018ff39c(param_1,local_70);
        lVar5 = (long)*(int *)(param_2 + 0x24);
        if (*param_1 != 0) {
          if (*(long *)(param_2 + 0x18) == lVar1) {
            return;
          }
          plVar6 = (long *)(*(long *)(param_2 + 0x18) - lVar5);
          do {
            cVar3 = (**(code **)(*plVar6 + 0x20))(plVar6);
            if (cVar3 == ',') {
              FUN_007ec4f8(plVar6,0xfd);
            }
            else {
              (**(code **)(*plVar6 + 0x48))(plVar6);
            }
            plVar6 = (long *)(*(long *)((long)plVar6 + (long)*(int *)(param_2 + 0x24) + 8) -
                             (long)*(int *)(param_2 + 0x24));
          } while (plVar6 != (long *)(lVar1 - lVar5));
          return;
        }
        plVar6 = (long *)(*(long *)((long)plVar6 + lVar5 + 8) + (long)-*(int *)(param_2 + 0x24));
      } while (plVar6 != (long *)(lVar1 - iVar2));
    }
    local_70[0] = 0;
  }
  local_58[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_58);
  FUN_00cbd7c0(param_1,local_70);
  return;
}


