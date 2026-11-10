/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0294d540; name: FUN_0294d540
 */


void FUN_0294d540(undefined8 param_1,ulong param_2,long *param_3,undefined1 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  short sVar5;
  undefined2 uVar6;
  byte bVar7;
  char cVar8;
  short sVar9;
  ulong uVar10;
  uint uVar11;
  short local_b0;
  undefined1 uStack_ae;
  undefined1 uStack_ad;
  undefined1 uStack_ac;
  char cStack_ab;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  short sStack_a8;
  undefined2 uStack_a6;
  undefined2 uStack_a4;
  undefined2 local_a2;
  undefined2 uStack_a0;
  undefined1 auStack_9e [6];
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined4 local_7e;
  undefined1 auStack_78 [40];
  
  local_b0 = 0;
  uStack_ae = 10;
  uStack_ad = 10;
  uStack_ac = 0;
  cStack_ab = '\0';
  uStack_aa = 0;
  uStack_a9 = 0;
  sStack_a8 = 0;
  uStack_a6 = 0;
  FUN_01246154(&uStack_a4);
  local_b0 = 0x51;
  uStack_ad = 10;
  sStack_a8 = (short)param_2;
  sVar5 = sStack_a8;
  uStack_a6 = (undefined2)(param_2 >> 0x10);
  uVar6 = uStack_a6;
  uStack_a9 = 1;
  uStack_ae = param_4;
  FUN_02943244(&uStack_a4,2,0xe3);
  FUN_0294325c(&uStack_a4,param_2 & 0xffffffff);
  FUN_02941ef0(param_1,&local_b0);
  uVar10 = (**(code **)(*param_3 + 0x1f8))(param_3);
  uVar3 = uStack_ad;
  uVar1 = uStack_ae;
  uStack_ae = (undefined1)(param_2 >> 0x10);
  uVar2 = uStack_ae;
  uStack_ad = (undefined1)(param_2 >> 0x18);
  uVar4 = uStack_ad;
  uStack_ae = uVar1;
  uStack_ad = uVar3;
  if ((uVar10 & 1) == 0) {
    sStack_a8 = 0;
    uStack_a6 = 0;
    uStack_a4 = 0;
    local_b0 = 0;
    uStack_ae = 0;
    uStack_ad = 0;
    uStack_ac = 0;
    cStack_ab = 0;
    uStack_aa = 0;
    uStack_a9 = 0;
    local_a2 = 0x101;
    uStack_a0 = 0x100;
    FUN_01246154(auStack_9e + 2);
    uStack_ac = (undefined1)param_2;
    cStack_ab = (char)(param_2 >> 8);
    local_b0 = sVar5;
    uStack_ae = uVar2;
    uStack_ad = uVar4;
    uStack_aa = uVar2;
    uStack_a9 = uVar4;
    sVar9 = (**(code **)(*param_3 + 0x110))(param_3);
    sStack_a8 = (**(code **)(*param_3 + 0x108))(param_3);
    sStack_a8 = sVar9 - sStack_a8;
    FUN_0293dcd0(param_1,&local_b0);
  }
  sVar9 = (**(code **)(*param_3 + 0x230))(param_3);
  if (sVar9 != 0) {
    local_7e = 0;
    local_b0 = 0;
    uStack_ae = 0;
    uStack_ad = 0;
    uStack_ac = 0x31;
    cStack_ab = 0;
    uStack_aa = 0;
    uStack_a9 = 0;
    sStack_a8 = 0;
    uStack_a6 = 0;
    uStack_a4 = 0;
    local_a2 = 0;
    local_80 = 0;
    uStack_a0 = 0;
    auStack_9e = (undefined1  [6])0x0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    FUN_01246154(auStack_78);
    local_80 = 1;
    uStack_ac = 0x31;
    cStack_ab = '\0';
    uStack_aa = 0;
    uStack_a9 = 0;
    local_b0 = sVar5;
    uStack_ae = uVar2;
    uStack_ad = uVar4;
    sStack_a8 = sVar5;
    uStack_a6 = uVar6;
    FUN_01852330(param_1,&local_b0);
  }
  bVar7 = (**(code **)(*param_3 + 0x708))(param_3);
  if (bVar7 != 0) {
    uVar11 = 0;
    do {
      cVar8 = (**(code **)(*param_3 + 0x670))(param_3,uVar11);
      if (cVar8 != '\0') {
        local_b0 = 0;
        uStack_ae = 0;
        uStack_ad = 0;
        uStack_ac = 0;
        cStack_ab = 0;
        uStack_aa = 0;
        uStack_a9 = 0;
        FUN_01246154(&sStack_a8);
        uStack_ac = (undefined1)uVar11;
        local_b0 = sVar5;
        uStack_ae = uVar2;
        uStack_ad = uVar4;
        cStack_ab = cVar8;
        FUN_0293df40(param_1,&local_b0);
      }
      uVar11 = uVar11 + 1;
    } while (bVar7 != uVar11);
  }
  return;
}


