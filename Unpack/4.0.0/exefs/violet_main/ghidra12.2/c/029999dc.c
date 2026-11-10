/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029999dc; name: FUN_029999dc
 */


undefined8 FUN_029999dc(undefined8 param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  ushort *puVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  undefined8 local_f0 [18];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ushort local_48;
  
  puVar3 = (ushort *)((long)param_2 - (long)*param_2);
  if (*puVar3 < 7) {
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    if ((ulong)puVar3[3] != 0) {
      iVar6 = *(int *)((long)param_2 + (ulong)puVar3[3]);
    }
  }
  if (iVar6 == param_3) {
    if ((*puVar3 < 9) || ((ulong)puVar3[4] == 0)) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)((long)param_2 + (ulong)puVar3[4]);
    }
    memset(local_f0,0,0x8f);
    local_50 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_48 = 0;
    FUN_010f8f64(param_1,local_f0,param_3);
    local_48 = local_48 & 0xff00;
    if (local_50._6_1_ != '\0') {
      uVar4 = 0;
      do {
        local_48 = CONCAT11(local_48._1_1_,(char)uVar4 + '\x01');
        plVar5 = (long *)local_f0[uVar4];
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        uVar1 = (**(code **)(*plVar5 + 0x110))(plVar5);
        uVar2 = iVar6 * (uVar1 & 0xffff);
        uVar1 = uVar2 / 100;
        if (0x31 < uVar2 % 100) {
          uVar1 = uVar2 / 100 + 1;
        }
        uVar2 = (**(code **)(*plVar5 + 0x108))(plVar5);
        if ((uVar2 & 0xffff) <= uVar1) {
          return 1;
        }
        uVar4 = (ulong)(byte)local_48;
      } while ((byte)local_48 < local_50._6_1_);
    }
  }
  return 0;
}


