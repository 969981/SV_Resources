/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d94cc; name: FUN_007d94cc
 */


bool FUN_007d94cc(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_620 [16];
  undefined4 local_610;
  undefined1 local_60c;
  undefined1 local_60b;
  undefined1 local_60a;
  undefined1 local_609;
  undefined1 local_608;
  undefined1 local_607;
  int local_50 [4];
  
  puVar1 = PTR_DAT_047d0860;
  lVar3 = FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
  lVar3 = *(long *)(lVar3 + 0x98);
  if (lVar3 == 0) {
    bVar2 = true;
  }
  else {
    local_50[0] = 0;
    local_610 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)&local_610);
    uVar4 = FUN_01f7c4e8(*(undefined8 *)puVar1);
    lVar5 = FUN_007e2bb4(uVar4,param_2);
    uVar4 = *(undefined8 *)(lVar3 + 0x30);
    local_608 = (undefined1)uVar4;
    local_610 = CONCAT13((char)((ulong)uVar4 >> 0x28),
                         CONCAT12((char)((ulong)uVar4 >> 0x30),
                                  CONCAT11((char)((ulong)uVar4 >> 0x38),10)));
    local_60c = (undefined1)((ulong)uVar4 >> 0x20);
    local_60b = (undefined1)((ulong)uVar4 >> 0x18);
    local_60a = (undefined1)((ulong)uVar4 >> 0x10);
    local_609 = (undefined1)((ulong)uVar4 >> 8);
    local_607 = param_3;
    FUN_007d5520(auStack_620,param_1,lVar5 + 8,&local_610,10,0);
    FUN_018ff39c(local_50,auStack_620);
    bVar2 = local_50[0] == 0;
  }
  return bVar2;
}


