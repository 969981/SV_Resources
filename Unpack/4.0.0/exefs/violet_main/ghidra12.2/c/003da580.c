/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003da580; name: FUN_003da580
 */


undefined8 FUN_003da580(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  ulong uVar5;
  int local_34;
  int local_28;
  int local_24;
  
  FUN_00481590();
  iVar1 = FUN_0043e850(param_4,&local_34);
  if ((iVar1 == 2) && (*(int *)(param_2 + 0xc) != local_34)) {
LAB_003da658:
    uVar3 = 0;
  }
  else {
    FUN_004815e0();
    puVar4 = *(undefined2 **)(*(long *)(param_1 + 0xa8) + 0x2f0);
    if (puVar4 != (undefined2 *)0x0) {
      if (*(long *)(*(long *)(param_1 + 0xa8) + 0x300) == 0) goto LAB_003da658;
      uVar5 = 0;
      lVar2 = FUN_003d62c0(*puVar4);
      if (lVar2 != 0) goto LAB_003da604;
      do {
        do {
          uVar5 = uVar5 + 1;
          if (*(ulong *)(*(long *)(param_1 + 0xa8) + 0x300) <= uVar5) goto LAB_003da658;
          lVar2 = FUN_003d62c0(*(undefined2 *)
                                (*(long *)(*(long *)(param_1 + 0xa8) + 0x2f0) + uVar5 * 2));
        } while (lVar2 == 0);
LAB_003da604:
        iVar1 = FUN_00485d60(param_3,&local_24,&local_28,0,0);
      } while (((iVar1 == 0) || (local_24 != *(int *)(lVar2 + 0xc))) ||
              (local_28 != *(int *)(lVar2 + 0x14)));
    }
    uVar3 = 1;
  }
  return uVar3;
}


