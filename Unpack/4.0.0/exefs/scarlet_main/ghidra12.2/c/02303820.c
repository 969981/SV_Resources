/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02303820; name: FUN_02303820
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02303820(void *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  switch(*param_2) {
  case 0:
    FUN_02303a7c(param_1,*(undefined8 *)(param_2 + 8));
    return;
  case 1:
    FUN_02303b1c(param_1,param_2 + 8);
    return;
  case 2:
    FUN_02303bc0(param_1,param_2 + 8);
    return;
  case 3:
    FUN_02303c70(param_1,param_2 + 8);
    return;
  default:
    memset(param_1,0,0x60);
    uVar3 = _DAT_03cabe60;
    uVar2 = DAT_03cab628;
    uVar1 = DAT_03cab620;
    *(undefined8 *)((long)param_1 + 0x18) = _UNK_03cabe68;
    *(undefined8 *)((long)param_1 + 0x10) = uVar3;
    *(undefined8 *)((long)param_1 + 0x28) = uVar2;
    *(undefined8 *)((long)param_1 + 0x20) = uVar1;
    uVar2 = _UNK_03caa5b8;
    uVar1 = _DAT_03caa5b0;
    *(undefined1 *)((long)param_1 + 0x40) = 0;
    *(undefined8 *)((long)param_1 + 0x44) = 0x40490fdb40490fdb;
    *(undefined8 *)((long)param_1 + 0x4c) = 0x40490fdb40490fdb;
    *(undefined4 *)((long)param_1 + 4) = 0x3f800000;
    *(undefined8 *)((long)param_1 + 0x38) = uVar2;
    *(undefined8 *)((long)param_1 + 0x30) = uVar1;
    return;
  }
}


