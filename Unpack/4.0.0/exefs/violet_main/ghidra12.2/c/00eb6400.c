/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00eb6400; name: FUN_00eb6400
 */


bool FUN_00eb6400(long param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  char local_58;
  undefined7 uStack_57;
  undefined8 local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulong uStack_28;
  
  lVar3 = *(long *)(param_1 + 0x30);
  uVar5 = (ulong)*(byte *)(lVar3 + 0x1b8);
  lVar1 = *(byte *)(lVar3 + 0x1b9) + uVar5;
  if ((int)lVar1 == 0) {
LAB_00eb6488:
    FUN_00d10524(&local_58,lVar3,param_1 + 0x70,param_1 + 0x80);
    if (*(char *)(param_1 + 0xf0) == '\0') {
      if (local_58 == '\0') goto LAB_00eb652c;
      *(undefined8 *)(param_1 + 0xf8) = local_50;
      *(long *)(param_1 + 0x100) = local_48;
      *(undefined8 *)(param_1 + 0x108) = local_40;
      *(undefined8 *)(param_1 + 0x110) = local_38;
      *(undefined1 *)(param_1 + 0xf0) = 1;
    }
    else {
      if (local_58 == '\0') {
        if (*(long **)(param_1 + 0x110) != (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x110) + 0x20))();
        }
        *(undefined1 *)(param_1 + 0xf0) = 0;
        return false;
      }
      plVar4 = *(long **)(param_1 + 0x110);
      *(undefined8 *)(param_1 + 0xf8) = local_50;
      *(long *)(param_1 + 0x100) = local_48;
      *(undefined8 *)(param_1 + 0x108) = local_40;
      *(undefined8 *)(param_1 + 0x110) = 0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))();
      }
      *(undefined8 *)(param_1 + 0x110) = local_38;
    }
    bVar2 = *(char *)(param_1 + 0xf0) != '\0';
  }
  else {
    local_30 = *(undefined8 *)(param_1 + 0x38);
    uStack_28 = uVar5;
    FUN_00eb6560(&local_58,*(long *)(lVar3 + 0x148),lVar1,
                 *(long *)(lVar3 + 0x148) +
                 (*(long *)(lVar3 + 0x188) - *(long *)(lVar3 + 0x180) >> 5) * lVar1 *
                 -0x5555555555555554,lVar1,&local_30,&uStack_28);
    *(ulong *)(param_1 + 0x70) = CONCAT71(uStack_57,local_58) + uVar5 * 4;
    *(ulong *)(param_1 + 0x78) = local_48 + uVar5 * 4;
    if (CONCAT71(uStack_57,local_58) != local_48) {
      lVar3 = *(long *)(param_1 + 0x30);
      goto LAB_00eb6488;
    }
LAB_00eb652c:
    bVar2 = false;
  }
  return bVar2;
}


