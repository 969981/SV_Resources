/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c1ef08; name: FUN_01c1ef08
 */


uint FUN_01c1ef08(byte *param_1,code *param_2,ulong param_3,undefined8 param_4,void *param_5,
                 undefined1 *param_6,undefined4 *param_7)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined1 auStack_258 [256];
  long local_158;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [256];
  
  if (*param_1 < 4) {
    lVar1 = (long)param_3 >> 1;
    switch(*param_1) {
    case 1:
      if (*(long *)(param_1 + 8) == 0) {
        uVar4 = 0;
      }
      else {
        plVar7 = (long *)(*(long *)(param_1 + 8) + lVar1);
        if ((param_3 & 1) != 0) {
          param_2 = *(code **)(param_2 + *plVar7);
        }
        memcpy(auStack_140,param_5,0x100);
        uVar4 = (*param_2)(plVar7,param_4,auStack_140,*param_6,*param_7);
      }
      return uVar4 & 1;
    case 2:
      if ((*(long *)(param_1 + 8) == 0) ||
         (lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar6 == 0)) {
        uVar4 = 0;
      }
      else {
        plVar7 = (long *)(lVar6 + lVar1 + -0x28);
        if ((param_3 & 1) != 0) {
          param_2 = *(code **)(param_2 + *plVar7);
        }
        memcpy(auStack_140,param_5,0x100);
        uVar4 = (*param_2)(plVar7,param_4,auStack_140,*param_6,*param_7);
      }
      return uVar4 & 1;
    case 3:
      FUN_01c1e1e8(&local_158,param_1 + 8);
      if (local_158 == 0) {
        uVar4 = 0;
      }
      else {
        memcpy(auStack_258,param_5,0x100);
        uVar3 = *param_6;
        uVar2 = *param_7;
        if ((param_3 & 1) != 0) {
          param_2 = *(code **)(param_2 + *(long *)(local_158 + lVar1));
        }
        memcpy(auStack_150,auStack_258,0x100);
        uVar5 = (*param_2)((long *)(local_158 + lVar1),param_4,auStack_150,uVar3,uVar2);
        param_2 = (code *)(uVar5 & 0xffffffff);
        uVar4 = 1;
      }
      FUN_01c1dff8(&local_158);
      return (uint)param_2 & uVar4;
    }
    if (*(long *)(param_1 + 8) != 0) {
      plVar7 = (long *)(*(long *)(param_1 + 8) + lVar1);
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *plVar7);
      }
      memcpy(auStack_140,param_5,0x100);
      uVar4 = (*param_2)(plVar7,param_4,auStack_140,*param_6,*param_7);
      goto LAB_01c1ef9c;
    }
  }
  uVar4 = 0;
LAB_01c1ef9c:
  return uVar4 & 1;
}


