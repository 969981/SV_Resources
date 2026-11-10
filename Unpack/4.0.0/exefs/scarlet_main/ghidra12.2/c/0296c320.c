/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0296c320; name: FUN_0296c320
 */


uint FUN_0296c320(long param_1,int param_2,undefined1 param_3,undefined4 param_4,undefined8 *param_5
                 ,undefined2 param_6,undefined2 param_7,undefined4 param_8)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined2 local_7e;
  undefined1 local_7c;
  undefined2 local_78;
  undefined2 local_76;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined5 local_60;
  undefined3 uStack_5b;
  undefined4 uStack_58;
  undefined1 local_54;
  
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x20);
  iVar2 = 0;
  if (lVar3 != 0) {
    iVar2 = *(int *)(lVar3 + 0xc);
  }
  if (iVar2 == param_2) {
    local_98 = 0x1300000000;
    FUN_0189372c(&local_90);
    local_7c = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_5b = 0;
    uStack_58 = 0;
    local_98 = CONCAT44(param_4,param_2);
    local_90 = *param_5;
    uStack_88 = param_5[1];
    local_54 = 1;
    local_76 = 0x81;
    local_80 = param_3;
    local_7e = param_6;
    local_78 = param_7;
    local_74 = param_8;
    uVar1 = FUN_0293ef60(param_1,&local_98);
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 1;
}


