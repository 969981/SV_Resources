/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0351f5e0; name: FUN_0351f5e0
 */


undefined8 FUN_0351f5e0(long param_1,long param_2,int param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long local_170 [32];
  uint local_70;
  long local_68;
  long lStack_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  
  local_70 = 0;
  local_50 = 0;
  local_68 = 0;
  lStack_60 = 0;
  local_58 = 0;
  local_48 = 1;
  (**(code **)(**(long **)(param_1 + 0x10) + 0xb8))(*(long **)(param_1 + 0x10),local_170,0);
  local_48._0_3_ = CONCAT12(1,(undefined2)local_48);
  if (local_68 != 0) {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      (**(code **)(**(long **)(param_1 + 0x10) + 0xb8))(*(long **)(param_1 + 0x10),local_170,0);
    }
    plVar2 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x20);
    if (plVar2 != (long *)0x0) {
      *(undefined4 *)(plVar2 + 1) = 1;
      if (local_70 == 0) {
        lVar3 = 0;
      }
      else {
        if (local_70 == 1) {
          uVar4 = 0;
          lVar3 = 0;
        }
        else {
          lVar3 = 0;
          uVar5 = 0;
          do {
            uVar4 = uVar5 + 2;
            lVar3 = *(long *)(*(long *)(local_170[uVar5 + 1] + 8) + 0x68) +
                    *(long *)(*(long *)(local_170[uVar5] + 8) + 0x68) + lVar3;
            uVar5 = uVar4;
          } while (((ulong)local_70 & 0xfffffffe) != uVar4);
        }
        if ((local_70 & 1) != 0) {
          lVar3 = *(long *)(*(long *)(local_170[uVar4] + 8) + 0x68) + lVar3;
        }
      }
      lVar6 = *(long *)(local_68 + 8);
      uVar1 = *(uint *)(lStack_60 + 0x88);
      plVar2[2] = param_2;
      *plVar2 = ((param_4 - lVar3) - lVar6) + (ulong)uVar1;
      if (*(long *)(local_68 + 0x10) == 0) {
        *(long **)(local_68 + 0x10) = plVar2;
        plVar2[3] = 0;
        return 1;
      }
      plVar2[3] = *(long *)(local_68 + 0x10);
      *(long **)(local_68 + 0x10) = plVar2;
      return 1;
    }
  }
  return 2;
}


