/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014eca54; name: FUN_014eca54
 */


void FUN_014eca54(long *param_1,long *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  lVar8 = *param_2;
  plVar6 = (long *)*param_3;
  param_1[2] = 0;
  puVar1 = PTR_DAT_047dda10;
  *(undefined2 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = (long)(puVar1 + 0x130);
  plVar7 = plVar6 + 1;
  plVar3 = (long *)(**(code **)*plVar7)(plVar7);
  lVar4 = FUN_012e29ac();
  do {
    if (plVar3 == (long *)0x0) {
      plVar3 = (long *)0x0;
LAB_014ecacc:
      param_1[4] = (long)plVar3;
      param_1[5] = lVar8;
      *(undefined4 *)(param_1 + 6) = 0;
      param_1[9] = 0;
      *(undefined1 *)(param_1 + 10) = 0;
      param_1[7] = 0;
      param_1[8] = 0;
      uVar5 = FUN_014ecb40();
      if ((uVar5 & 1) == 0) {
        bVar2 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar6 + 0xb8))(plVar6);
        if ((uVar5 & 1) == 0) {
          (**(code **)*plVar7)(plVar7);
          bVar2 = FUN_012e2a88();
        }
        else {
          bVar2 = 1;
        }
      }
      *(byte *)(param_1 + 10) = bVar2 & 1;
      return;
    }
    if (plVar3 == (long *)lVar4) {
      plVar3 = plVar6;
      goto LAB_014ecacc;
    }
    plVar3 = (long *)*plVar3;
  } while( true );
}


