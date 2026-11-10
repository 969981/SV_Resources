/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003dc730; name: FUN_003dc730
 */


bool FUN_003dc730(long param_1,int param_2)

{
  void *__dest;
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [64];
  
  FUN_003b0120();
  iVar1 = FUN_0043b720();
  __dest = (void *)(param_1 + 0x37c);
  if (*(int *)(param_1 + 0x38) != param_2) {
    __dest = (void *)(param_1 + 0x33c);
  }
  if (param_2 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x500);
    lVar4 = param_1 + 0x508;
    FUN_003a4510(param_1 + 0x948);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x530);
    *(undefined4 *)(param_1 + 0x7c) = 1;
    lVar4 = param_1 + 0x538;
    FUN_003a4520(param_1 + 0x948);
  }
  uVar3 = FUN_003b0120(param_1);
  iVar2 = FUN_003dc4c0(param_1,param_2,uVar3,*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x278),
                       __dest,0,"traffic upd",0xb,auStack_80,lVar4,uVar5);
  if (iVar2 != 0) {
    memcpy(__dest,auStack_80,(long)iVar1);
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  FUN_00453300(auStack_80,0x40);
  return iVar2 != 0;
}


