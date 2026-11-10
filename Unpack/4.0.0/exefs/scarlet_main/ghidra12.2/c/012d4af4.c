/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012d4af4; name: FUN_012d4af4
 */


void FUN_012d4af4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  
  *(undefined2 *)(param_1 + 3) = 0;
  *param_1 = &PTR_LAB_045a6500;
  param_1[1] = &PTR_LAB_045a6620;
  param_1[2] = 0;
  plVar5 = param_4 + 1;
  plVar2 = (long *)(**(code **)*plVar5)(plVar5);
  lVar3 = FUN_012e29ac();
  do {
    if (plVar2 == (long *)0x0) {
      plVar2 = (long *)0x0;
LAB_012d4b6c:
      param_1[4] = plVar2;
      param_1[5] = param_2;
      *(undefined4 *)(param_1 + 6) = 0;
      param_1[9] = 0;
      *(undefined1 *)(param_1 + 10) = 0;
      param_1[7] = 0;
      param_1[8] = 0;
      uVar4 = FUN_014ecb40();
      if ((uVar4 & 1) == 0) {
        bVar1 = 0;
      }
      else {
        uVar4 = (**(code **)(*param_4 + 0xb8))(param_4);
        if ((uVar4 & 1) == 0) {
          (**(code **)*plVar5)(plVar5);
          bVar1 = FUN_012e2a88();
        }
        else {
          bVar1 = 1;
        }
      }
      *(byte *)(param_1 + 10) = bVar1 & 1;
      *param_1 = &PTR_FUN_045a6388;
      param_1[1] = &PTR_LAB_045a64a8;
      FUN_014de348(param_1 + 0xb,param_3);
      param_1[0x22] = 0;
      *(undefined4 *)((long)param_1 + 0x124) = 1;
      nn::os::InitializeLightEvent(param_1 + 0x23,0,1);
      return;
    }
    if (plVar2 == (long *)lVar3) {
      plVar2 = param_4;
      goto LAB_012d4b6c;
    }
    plVar2 = (long *)*plVar2;
  } while( true );
}


