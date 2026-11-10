/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03531af4; name: FUN_03531af4
 */


int FUN_03531af4(long *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long local_160 [32];
  uint local_60;
  long local_58;
  long local_50;
  undefined4 local_48;
  undefined8 local_40;
  uint3 local_38;
  undefined1 uStack_35;
  
  local_60 = 0;
  local_40 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  _local_38 = 0x1000001;
  (**(code **)(*param_1 + 0xb8))(param_1,local_160,0);
  local_38 = (uint3)(ushort)local_38;
  while (local_58 != param_2) {
    (**(code **)(*param_1 + 0xb8))(param_1,local_160,1);
  }
  lVar3 = param_1[0xd];
  iVar1 = (int)lVar3;
  lVar6 = param_1[2];
  if (lVar6 == 0) {
    iVar4 = 0;
  }
  else {
    lVar5 = 0;
    do {
      lVar5 = lVar5 + lVar3;
      iVar4 = (int)lVar5;
      lVar3 = *(long *)(lVar6 + 0x68);
      iVar1 = (int)lVar3;
      lVar6 = *(long *)(lVar6 + 0x10);
    } while (lVar6 != 0);
  }
  if (*(long *)(param_2 + 0x18) == 0) {
    iVar1 = 0;
  }
  else {
    if (local_60 == 0) {
      iVar2 = 0;
    }
    else {
      if (local_60 == 1) {
        uVar7 = 0;
        iVar2 = 0;
      }
      else {
        lVar3 = 0;
        uVar8 = 0;
        do {
          uVar7 = uVar8 + 2;
          lVar3 = *(long *)(*(long *)(local_160[uVar8 + 1] + 8) + 0x68) +
                  *(long *)(*(long *)(local_160[uVar8] + 8) + 0x68) + lVar3;
          iVar2 = (int)lVar3;
          uVar8 = uVar7;
        } while (((ulong)local_60 & 0xfffffffe) != uVar7);
      }
      if ((local_60 & 1) != 0) {
        iVar2 = (int)*(undefined8 *)(*(long *)(local_160[uVar7] + 8) + 0x68) + iVar2;
      }
    }
    iVar1 = *(int *)(local_50 + 0x88) +
            (((((int)*(undefined8 *)(param_1[0xc] + 8) - iVar4) - iVar1) - iVar2) -
            *(int *)(param_2 + 8));
  }
  return iVar1;
}


