/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029061d4; name: FUN_029061d4
 */


uint FUN_029061d4(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x180))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),8);
  plVar4 = *(long **)(param_1 + 0x30);
  if ((uVar3 & 1) == 0) {
    uVar3 = (**(code **)(*plVar4 + 0x180))(plVar4,*(undefined4 *)(param_1 + 0x98),0x6b);
    plVar4 = *(long **)(param_1 + 0x30);
    if ((uVar3 & 1) == 0) {
      uVar3 = (**(code **)(*plVar4 + 0x180))(plVar4,*(undefined4 *)(param_1 + 0xb0),0x61);
      plVar4 = *(long **)(param_1 + 0x30);
      if ((uVar3 & 1) == 0) {
        uVar3 = (**(code **)(*plVar4 + 0x180))(plVar4,*(undefined4 *)(param_1 + 0xb0),0xb7);
        plVar4 = *(long **)(param_1 + 0x30);
        if ((uVar3 & 1) == 0) {
          uVar3 = (**(code **)(*plVar4 + 0x180))(plVar4,*(undefined4 *)(param_1 + 0xb0),0x5c);
          if ((uVar3 & 1) == 0) {
            uVar2 = 0;
            goto LAB_0290623c;
          }
          plVar4 = *(long **)(param_1 + 0x30);
          uVar5 = 0x32;
          lVar6 = *plVar4;
        }
        else {
          lVar6 = *plVar4;
          uVar5 = 0x3a;
        }
        uVar2 = (**(code **)(lVar6 + 0x4c0))(plVar4,uVar5);
        uVar2 = -(uVar2 & 1);
      }
      else {
        uVar3 = (**(code **)(*plVar4 + 0x4c0))(plVar4,0x55);
        uVar2 = 0xfffffffe;
        if ((uVar3 & 1) == 0) {
          uVar2 = 0;
        }
      }
      goto LAB_0290623c;
    }
  }
  uVar2 = (**(code **)(*plVar4 + 0x4c0))(plVar4,0x32);
  uVar2 = uVar2 & 1;
LAB_0290623c:
  if (*(short *)(param_1 + 0xb6) == 0x30) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46);
    uVar1 = uVar2 - 2;
    if ((uVar3 & 1) == 0) {
      uVar1 = uVar2;
    }
  }
  else {
    uVar1 = uVar2;
    if (*(short *)(param_1 + 0xb6) == 99) {
      uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
      uVar1 = uVar2 + 2;
      if ((uVar3 & 1) == 0) {
        uVar1 = uVar2;
      }
    }
  }
  return uVar1;
}


