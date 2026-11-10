/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d63020; name: FUN_01d63020
 */


void FUN_01d63020(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined1 local_550 [8];
  long local_548 [159];
  
  cVar4 = DAT_04831058;
  lVar5 = FUN_01d63a08(param_2);
  lVar7 = 0;
  do {
    puVar2 = (undefined1 *)(lVar5 + lVar7);
    local_550[lVar7] = *puVar2;
    *(undefined8 *)((long)local_548 + lVar7) = *(undefined8 *)(puVar2 + 8);
    *(undefined8 *)((long)local_548 + lVar7 + 8) = *(undefined8 *)(puVar2 + 0x10);
    *(undefined8 *)((long)local_548 + lVar7 + 0x10) = *(undefined8 *)(puVar2 + 0x18);
    plVar6 = *(long **)(puVar2 + 0x20);
    *(long **)((long)local_548 + lVar7 + 0x18) = plVar6;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))();
    }
    *(undefined8 *)((long)local_548 + lVar7 + 0x30) = *(undefined8 *)(puVar2 + 0x38);
    lVar1 = lVar7 + 0x40;
    *(undefined8 *)((long)local_548 + lVar7 + 0x28) = *(undefined8 *)(puVar2 + 0x30);
    lVar7 = lVar1;
  } while (lVar1 != 0x500);
  uVar3 = 0x80;
  if (cVar4 == '\0') {
    uVar3 = 0xffffffffffffffff;
  }
  FUN_01d63bb8(param_1,uVar3,local_550);
  FUN_01d61f44(local_550);
  return;
}


