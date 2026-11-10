/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02917a94; name: FUN_02917a94
 */


undefined8 FUN_02917a94(long param_1)

{
  ushort uVar1;
  short sVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  
  puVar5 = (undefined8 *)(param_1 + 0x30);
  puVar6 = (undefined4 *)(param_1 + 0xa4);
  uVar3 = (**(code **)(*(long *)*puVar5 + 0x170))((long *)*puVar5,*puVar6,0x39);
  if (((((((((uVar3 & 1) == 0) &&
           (uVar3 = (**(code **)(*(long *)*puVar5 + 0x170))((long *)*puVar5,*puVar6,0x3b),
           (uVar3 & 1) == 0)) &&
          (uVar3 = (**(code **)(*(long *)*puVar5 + 0x170))((long *)*puVar5,*puVar6,0x59),
          (uVar3 & 1) == 0)) &&
         (((uVar3 = (**(code **)(*(long *)*puVar5 + 0x170))((long *)*puVar5,*puVar6,0x9d),
           (uVar3 & 1) == 0 &&
           (uVar3 = (**(code **)(*(long *)*puVar5 + 0x170))((long *)*puVar5,*puVar6,0x78),
           (uVar3 & 1) == 0)) &&
          ((uVar3 = (**(code **)(*(long *)*puVar5 + 0x170))((long *)*puVar5,*puVar6,0x99),
           (uVar3 & 1) == 0 &&
           ((uVar3 = (**(code **)(*(long *)*puVar5 + 0x170))((long *)*puVar5,*puVar6,0xc4),
            (uVar3 & 1) == 0 &&
            (uVar3 = (**(code **)(*(long *)*puVar5 + 0x170))((long *)*puVar5,*puVar6,0x101),
            (uVar3 & 1) == 0)))))))) &&
        (uVar3 = (**(code **)(*(long *)*puVar5 + 0x170))((long *)*puVar5,*puVar6,0x11c),
        (uVar3 & 1) == 0)) &&
       (((uVar3 = (**(code **)(*(long *)*puVar5 + 0x170))((long *)*puVar5,*puVar6,0x130),
         (uVar3 & 1) == 0 &&
         (uVar3 = (**(code **)(*(long *)*puVar5 + 0x170))((long *)*puVar5,*puVar6,0x143),
         (uVar3 & 1) == 0)) &&
        (uVar3 = (**(code **)(*(long *)*puVar5 + 0x170))((long *)*puVar5,*puVar6,0x14a),
        (uVar3 & 1) == 0)))) &&
      (((uVar3 = (**(code **)(*(long *)*puVar5 + 0x170))((long *)*puVar5,*puVar6,0x1b3),
        (uVar3 & 1) == 0 &&
        (uVar3 = (**(code **)(*(long *)*puVar5 + 0x170))((long *)*puVar5,*puVar6,0x1b4),
        (uVar3 & 1) == 0)) &&
       ((uVar3 = (**(code **)(*(long *)*puVar5 + 0x170))((long *)*puVar5,*puVar6,0x1e2),
        (uVar3 & 1) == 0 &&
        ((uVar3 = (**(code **)(*(long *)*puVar5 + 0x170))((long *)*puVar5,*puVar6,0x1e5),
         (uVar3 & 1) == 0 &&
         (uVar3 = (**(code **)(*(long *)*puVar5 + 0x170))((long *)*puVar5,*puVar6,0x1fe),
         (uVar3 & 1) == 0)))))))) &&
     (((uVar3 = (**(code **)(*(long *)*puVar5 + 0x170))((long *)*puVar5,*puVar6,0x20a),
       (uVar3 & 1) == 0 &&
       ((((((uVar3 = (**(code **)(*(long *)*puVar5 + 0x170))((long *)*puVar5,*puVar6,0x20b),
            (uVar3 & 1) == 0 &&
            (uVar3 = (**(code **)(*(long *)*puVar5 + 0x170))((long *)*puVar5,*puVar6,0x20f),
            (uVar3 & 1) == 0)) &&
           (uVar3 = (**(code **)(*(long *)*puVar5 + 0x170))((long *)*puVar5,*puVar6,0x221),
           (uVar3 & 1) == 0)) &&
          ((uVar3 = (**(code **)(*(long *)*puVar5 + 0x170))((long *)*puVar5,*puVar6,0x223),
           (uVar3 & 1) == 0 &&
           (uVar3 = (**(code **)(*(long *)*puVar5 + 0x170))((long *)*puVar5,*puVar6,0x225),
           (uVar3 & 1) == 0)))) &&
         (uVar3 = (**(code **)(*(long *)*puVar5 + 0x170))((long *)*puVar5,*puVar6,0x22b),
         (uVar3 & 1) == 0)) &&
        (((uVar3 = (**(code **)(*(long *)*puVar5 + 0x170))((long *)*puVar5,*puVar6,0x23a),
          (uVar3 & 1) == 0 &&
          (uVar3 = (**(code **)(*(long *)*puVar5 + 0x170))((long *)*puVar5,*puVar6,0x23c),
          (uVar3 & 1) == 0)) &&
         ((uVar3 = (**(code **)(*(long *)*puVar5 + 0x170))((long *)*puVar5,*puVar6,0x24a),
          (uVar3 & 1) == 0 &&
          (((uVar3 = (**(code **)(*(long *)*puVar5 + 0x170))((long *)*puVar5,*puVar6,0x24f),
            (uVar3 & 1) == 0 &&
            (uVar3 = (**(code **)(*(long *)*puVar5 + 0x170))((long *)*puVar5,*puVar6,0x25d),
            (uVar3 & 1) == 0)) &&
           (uVar3 = (**(code **)(*(long *)*puVar5 + 0x170))((long *)*puVar5,*puVar6,0x266),
           (uVar3 & 1) == 0)))))))))) &&
      ((uVar3 = (**(code **)(*(long *)*puVar5 + 0x170))((long *)*puVar5,*puVar6,0x267),
       (uVar3 & 1) == 0 &&
       (uVar3 = (**(code **)(*(long *)*puVar5 + 0x170))((long *)*puVar5,*puVar6,0x268),
       (uVar3 & 1) == 0)))))) {
    return 0;
  }
  sVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if ((sVar2 == 0x1d5) &&
     (uVar3 = (**(code **)(*(long *)*puVar5 + 0x4c8))((long *)*puVar5,0x4e), (uVar3 & 1) != 0)) {
    return 3;
  }
  uVar1 = *(ushort *)(param_1 + 0xb4);
  uVar4 = (uint)uVar1;
  if (uVar1 < 0x185) {
    if (uVar4 == 0x8d || uVar1 < 0x8d) {
      if (((0x3b < uVar4 - 0x2f) ||
          ((1L << ((ulong)(uVar4 - 0x2f) & 0x3f) & 0x810000020200001U) == 0)) && (uVar4 != 0x7a)) {
        return 0;
      }
    }
    else if (((0x3c < uVar4 - 0xed) ||
             ((1L << ((ulong)(uVar4 - 0xed) & 0x3f) & 0x1000040000800001U) == 0)) &&
            ((uVar4 != 0x8e && (uVar4 != 0xe2)))) {
      return 0;
    }
  }
  else if (uVar4 == 0x22d || uVar1 < 0x22d) {
    if (((0x3e < uVar4 - 0x1dc) ||
        ((1L << ((ulong)(uVar4 - 0x1dc) & 0x3f) & 0x4404000000000401U) == 0)) &&
       ((uVar4 != 0x185 && (uVar1 != 0x19b)))) {
      return 0;
    }
  }
  else if (((0x3e < uVar4 - 0x22e) ||
           ((1L << ((ulong)(uVar4 - 0x22e) & 0x3f) & 0x4000001000000081U) == 0)) && (uVar4 != 0x2a9)
          ) {
    return 0;
  }
  uVar3 = (**(code **)(*(long *)*puVar5 + 0x4c8))((long *)*puVar5,0x27);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  return 2;
}


