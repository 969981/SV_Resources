/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0293d210; name: FUN_0293d210
 */


undefined8 FUN_0293d210(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  if (*(char *)((long)param_1 + 0x1a) == '\x05') {
    iVar1 = *(int *)(param_1 + 4);
    uVar3 = FUN_00f7e284(param_1[1]);
    plVar4 = (long *)FUN_01021c94(uVar3,iVar1);
    uVar5 = (**(code **)(*plVar4 + 0x220))(plVar4,0x10);
    if (((uVar5 & 1) == 0) && (iVar2 = FUN_010803c8(param_1[2]), iVar2 == iVar1)) {
      lVar6 = FUN_01a7a6e0(*param_1,*(undefined2 *)((long)param_1 + 0x1c));
      if (lVar6 < -0x1757501f2300be4a) {
        if (lVar6 < -0x3c7fc2629a232dd7) {
          if (lVar6 == -0x7eef89852800aec9) {
            return 0;
          }
          if (lVar6 == -0x74516627f2ffca8f) {
            return 0;
          }
          lVar7 = -0x670e91d055c1d63f;
        }
        else if (lVar6 < -0x306f578eef79be49) {
          if (lVar6 == -0x3c7fc2629a232dd7) {
            return 0;
          }
          lVar7 = -0x3080b9c52b5ec017;
        }
        else {
          if (lVar6 == -0x306f578eef79be49) {
            return 0;
          }
          lVar7 = -0x186ed18d592a73ea;
        }
      }
      else if (lVar6 < 0x392d26434048552d) {
        if (lVar6 == -0x1757501f2300be4a) {
          return 0;
        }
        if (lVar6 == 0x749de54b1b3a59f) {
          return 0;
        }
        lVar7 = 0x30b2c9c369634099;
      }
      else if (lVar6 < 0x50fc5612cd4b7875) {
        if (lVar6 == 0x392d26434048552d) {
          return 0;
        }
        lVar7 = 0x4d3149ca727e99ee;
      }
      else {
        if (lVar6 == 0x50fc5612cd4b7875) {
          return 0;
        }
        lVar7 = 0x7e64a2d056a47975;
      }
      if (lVar6 == lVar7) {
        return 0;
      }
      if (*(short *)(param_1 + 3) == 200) {
        if (lVar6 == -0x18b0dabbbbcb6e70) {
          return 0;
        }
        if (lVar6 == 0x5ad9be5a83bf246d) {
          return 0;
        }
        if (lVar6 == 0x5c58902b05ee580d) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}


