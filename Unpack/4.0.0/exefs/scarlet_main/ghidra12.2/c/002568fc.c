/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002568fc; name: FUN_002568fc
 */


void FUN_002568fc(long *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long local_a0;
  ulong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long alStack_50 [4];
  long *local_30;
  
  *param_1 = (long)(PTR_DAT_047cc228 + 0x10);
  param_1[1] = param_2;
  local_98 = 1;
  uStack_88 = param_3[1];
  local_90 = *param_3;
  uStack_78 = param_3[3];
  uStack_80 = param_3[2];
  uStack_68 = param_3[5];
  local_70 = param_3[4];
  uStack_58 = param_3[7];
  uStack_60 = param_3[6];
  local_30 = (long *)0x0;
  local_a0 = param_2;
  FUN_0024ecd8(param_1 + 2,&local_a0);
  if (local_30 != (long *)0x0) {
    if (local_30 == alStack_50) {
      pcVar2 = *(code **)(*local_30 + 0x10);
    }
    else {
      pcVar2 = *(code **)(*local_30 + 0x18);
    }
    (*pcVar2)();
  }
  plVar3 = (long *)param_1[1];
  lVar1 = (**(code **)(*plVar3 + 0x10))(plVar3,0x58,8);
  local_98 = local_98 & 0xffffffff00000000;
  local_90 = 0;
  local_a0 = DAT_03cb5468;
                    /* try { // try from 002569a0 to 002569a7 has its CatchHandler @ 002569c8 */
  FUN_002571b0(lVar1,&local_a0);
  param_1[0x2a] = lVar1;
  param_1[0x2b] = (long)plVar3;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  FUN_002569cc(param_1);
  return;
}


