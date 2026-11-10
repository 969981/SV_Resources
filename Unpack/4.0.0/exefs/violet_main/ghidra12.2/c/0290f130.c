/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290f130; name: FUN_0290f130
 */


undefined4 FUN_0290f130(long param_1)

{
  short sVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  
  uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x210))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3c0))(*(long **)(param_1 + 0x30),uVar4);
  if (uVar3 == 1) {
    uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                       *(undefined4 *)(param_1 + 0xb0));
    if (((((uVar5 & 1) != 0) && (sVar1 = *(short *)(param_1 + 0xb6), sVar1 != 0x27)) &&
        (sVar1 != 0x50)) &&
       ((sVar1 != 0x9e &&
        (uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5a)
        , (uVar5 & 1) != 0)))) {
      return 2;
    }
LAB_0290f208:
    cVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                       *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
    if ((cVar2 == '\0') ||
       (cVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                           *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90)),
       cVar2 == '\x03')) {
      uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5a);
      uVar6 = 0xfffffffe;
    }
    else {
      cVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                         *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
      if (cVar2 != '\x02') goto LAB_0290f1dc;
      uVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x3e);
      uVar6 = 2;
    }
    if ((uVar5 & 1) == 0) {
      uVar6 = 0;
    }
  }
  else {
    if ((uVar3 & 0xfffffffe) == 2) {
      FUN_0157dfe8(param_1);
    }
    else if (uVar3 == 5) {
      FUN_029094c8(param_1);
    }
    else {
      if (uVar3 != 4) goto LAB_0290f208;
      FUN_0290c12c(param_1);
    }
LAB_0290f1dc:
    uVar6 = 0;
  }
  return uVar6;
}


