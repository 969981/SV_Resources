/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290b1c8; name: FUN_0290b1c8
 */


undefined8 FUN_0290b1c8(long param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  cVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x318))(*(long **)(param_1 + 0x30),uVar3);
  uVar1 = *(ushort *)(param_1 + 0x9e) - 0x68;
  if (((uVar1 < 0x3d) && ((1L << ((ulong)uVar1 & 0x3f) & 0x1800000000000001U) != 0)) ||
     (iVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x100))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0)), iVar4 < 5)) {
LAB_0290b22c:
    if (cVar2 != '\x01') goto LAB_0290b258;
  }
  else {
    if ((*(short *)(param_1 + 0xb4) == 0x2af) &&
       (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e),
       (uVar5 & 1) != 0)) {
      return 2;
    }
    if ((cVar2 != '\x01') || (*(short *)(param_1 + 0xb6) != 0x7e)) goto LAB_0290b22c;
    uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
    if ((uVar5 & 1) != 0) {
      return 2;
    }
  }
  uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x55);
  if ((uVar5 & 1) != 0) {
    return 0xfffffffe;
  }
LAB_0290b258:
  FUN_01a048b4(param_1);
  return 0;
}


