/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007fa408; name: FUN_007fa408
 */


void FUN_007fa408(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,int param_7,undefined4 param_8,byte param_9)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ErrorResultVariant *this;
  undefined8 *puVar8;
  undefined *local_70;
  undefined8 uStack_68;
  int local_58 [2];
  
  if (*(char *)(param_2 + 0xb0) == '\x04') {
    if (param_7 == 0) {
      lVar5 = 0;
    }
    else {
      uVar4 = FUN_0078a12c();
      lVar5 = FUN_007bf9f0(0xcf8,uVar4);
      if (lVar5 != 0) {
        FUN_007f8308(lVar5,param_7,param_8);
      }
    }
    puVar1 = (undefined8 *)(param_2 + 0xd0);
    *(long *)(param_2 + 200) = lVar5;
    *(byte *)(param_2 + 0x6f8) = param_9 & 1;
    if (*(undefined8 **)(param_2 + 0xd8) != puVar1) {
      puVar7 = *(undefined8 **)(param_2 + 0xd8);
      do {
        puVar8 = (undefined8 *)puVar7[1];
        *puVar7 = 0;
        puVar7[1] = 0;
        FUN_0078fa04(param_2 + 0xe8,param_2 + 0xe8,(long)*(int *)(param_2 + 0xfc) + (long)puVar7);
        puVar7 = puVar8;
      } while (puVar8 != puVar1);
    }
    FUN_0078f9d4(puVar1);
    uVar4 = FUN_0078a12c();
    uVar6 = FUN_0078a12c();
    lVar5 = FUN_007bf9f0(0xf8,uVar6);
    if (lVar5 != 0) {
      iVar2 = 0x4000;
      if (param_5 != 0) {
        iVar2 = param_5;
      }
      local_70 = PTR_DAT_047d0878 + 0x10;
      uStack_68 = param_3;
      FUN_007ca938(lVar5,&local_70,param_2 + 0x40,uVar4,param_4,1,0x7fffffff,iVar2,0x20);
    }
    *(long *)(param_2 + 0x60) = lVar5;
    iVar2 = FUN_00789eb0();
    local_58[0] = 0;
    if (iVar2 == 0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_047d0968);
      if (lVar5 == 0) {
        uVar3 = nn::os::GetCurrentCoreNumber();
      }
      else {
        uVar3 = (int)lVar5 - 1;
      }
      local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar3);
    }
    else {
      uVar3 = iVar2 - 1;
    }
    local_58[0] = 1 << (ulong)(uVar3 & 0x1f);
    FUN_007ca408(*(undefined8 *)(param_2 + 0x60),local_58);
    FUN_007eac5c(&local_70,param_2 + 8,param_6);
    this = (ErrorResultVariant *)((ulong)&local_70 | 4);
    local_70 = (undefined *)((ulong)local_70 & 0xffffffff00000000);
    local_58[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_58);
    FUN_018ff39c(param_2 + 0xb8,&local_70);
    *(undefined1 *)(param_2 + 0xb0) = 1;
    (**(code **)(**(long **)(param_2 + 0x60) + 0x30))();
    local_70 = (undefined *)((ulong)local_70 & 0xffffffff00000000);
  }
  else {
    local_70 = (undefined *)CONCAT44(local_70._4_4_,0x10408);
    this = (ErrorResultVariant *)((ulong)&local_70 | 4);
  }
  local_58[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_58);
  FUN_00cbd7c0(param_1,&local_70);
  return;
}


