/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007dc878; name: FUN_007dc878
 */


void FUN_007dc878(undefined8 param_1,long param_2,long param_3,undefined4 param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong local_70 [2];
  undefined4 local_58 [2];
  
  if (param_3 == 0) {
    uVar5 = 0x10407;
  }
  else {
    plVar2 = (long *)FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
    lVar3 = (**(code **)(*plVar2 + 0x38))(plVar2,param_3);
    if (((((((lVar3 == 0) || (*(char *)(lVar3 + 0x78) != '\0')) ||
           (*(char *)(lVar3 + 0x3a) == '\x03')) ||
          ((*(long *)(param_2 + 0x60) == param_3 || (*(long *)(param_2 + 0x78) == param_3)))) ||
         (*(long *)(param_2 + 0x90) == param_3)) ||
        (((((*(long *)(param_2 + 0xa8) == param_3 || (*(long *)(param_2 + 0xc0) == param_3)) ||
           ((*(long *)(param_2 + 0xd8) == param_3 ||
            (((*(long *)(param_2 + 0xf0) == param_3 || (*(long *)(param_2 + 0x108) == param_3)) ||
             (*(long *)(param_2 + 0x120) == param_3)))))) ||
          (((*(long *)(param_2 + 0x138) == param_3 || (*(long *)(param_2 + 0x150) == param_3)) ||
           ((*(long *)(param_2 + 0x168) == param_3 ||
            ((((*(long *)(param_2 + 0x180) == param_3 || (*(long *)(param_2 + 0x198) == param_3)) ||
              ((*(long *)(param_2 + 0x1b0) == param_3 ||
               (((*(long *)(param_2 + 0x1c8) == param_3 || (*(long *)(param_2 + 0x1e0) == param_3))
                || (*(long *)(param_2 + 0x1f8) == param_3)))))) ||
             ((*(long *)(param_2 + 0x210) == param_3 || (*(long *)(param_2 + 0x228) == param_3))))))
           )))) || (*(long *)(param_2 + 0x240) == param_3)))) ||
       (((*(long *)(param_2 + 600) == param_3 || (*(long *)(param_2 + 0x270) == param_3)) ||
        (*(long *)(param_2 + 0x288) == param_3)))) {
      local_70[0] = local_70[0] & 0xffffffff00000000;
      goto LAB_007dca1c;
    }
    uVar6 = 0;
    if (*(long *)(param_2 + 0x60) != 0) {
      uVar6 = 0x18;
    }
    if (*(long *)(param_2 + 0x78) == 0) {
      uVar6 = 1;
    }
    uVar1 = 2;
    if (*(long *)(param_2 + 0x90) != 0) {
      uVar1 = uVar6;
    }
    uVar6 = 3;
    if (*(long *)(param_2 + 0xa8) != 0) {
      uVar6 = uVar1;
    }
    uVar1 = 4;
    if (*(long *)(param_2 + 0xc0) != 0) {
      uVar1 = uVar6;
    }
    uVar6 = 5;
    if (*(long *)(param_2 + 0xd8) != 0) {
      uVar6 = uVar1;
    }
    uVar1 = 6;
    if (*(long *)(param_2 + 0xf0) != 0) {
      uVar1 = uVar6;
    }
    uVar6 = 7;
    if (*(long *)(param_2 + 0x108) != 0) {
      uVar6 = uVar1;
    }
    uVar1 = 8;
    if (*(long *)(param_2 + 0x120) != 0) {
      uVar1 = uVar6;
    }
    uVar6 = 9;
    if (*(long *)(param_2 + 0x138) != 0) {
      uVar6 = uVar1;
    }
    uVar1 = 10;
    if (*(long *)(param_2 + 0x150) != 0) {
      uVar1 = uVar6;
    }
    uVar6 = 0xb;
    if (*(long *)(param_2 + 0x168) != 0) {
      uVar6 = uVar1;
    }
    uVar1 = 0xc;
    if (*(long *)(param_2 + 0x180) != 0) {
      uVar1 = uVar6;
    }
    uVar6 = 0xd;
    if (*(long *)(param_2 + 0x198) != 0) {
      uVar6 = uVar1;
    }
    uVar1 = 0xe;
    if (*(long *)(param_2 + 0x1b0) != 0) {
      uVar1 = uVar6;
    }
    uVar6 = 0xf;
    if (*(long *)(param_2 + 0x1c8) != 0) {
      uVar6 = uVar1;
    }
    uVar1 = 0x10;
    if (*(long *)(param_2 + 0x1e0) != 0) {
      uVar1 = uVar6;
    }
    uVar6 = 0x11;
    if (*(long *)(param_2 + 0x1f8) != 0) {
      uVar6 = uVar1;
    }
    uVar1 = 0x12;
    if (*(long *)(param_2 + 0x210) != 0) {
      uVar1 = uVar6;
    }
    uVar6 = 0x13;
    if (*(long *)(param_2 + 0x228) != 0) {
      uVar6 = uVar1;
    }
    uVar1 = 0x14;
    if (*(long *)(param_2 + 0x240) != 0) {
      uVar1 = uVar6;
    }
    uVar6 = 0x15;
    if (*(long *)(param_2 + 600) != 0) {
      uVar6 = uVar1;
    }
    uVar1 = 0x16;
    if (*(long *)(param_2 + 0x270) != 0) {
      uVar1 = uVar6;
    }
    uVar6 = 0x17;
    if (*(long *)(param_2 + 0x288) != 0) {
      uVar6 = uVar1;
    }
    if (uVar6 < 0x18) {
      *(undefined1 *)(lVar3 + 0x78) = 1;
      uVar4 = FUN_007d94cc(*(undefined8 *)(param_2 + 0x58),param_3,param_4);
      if ((uVar4 & 1) != 0) {
        param_2 = param_2 + (ulong)uVar6 * 0x18;
        *(long *)(param_2 + 0x60) = param_3;
        *(undefined4 *)(param_2 + 0x70) = param_4;
        local_70[0] = 0;
        FUN_007935cc(local_70);
        *(ulong *)(param_2 + 0x68) = local_70[0];
        local_70[0] = local_70[0] & 0xffffffff00000000;
        goto LAB_007dca1c;
      }
    }
    uVar5 = 0x4c0d;
  }
  local_70[0] = CONCAT44(local_70[0]._4_4_,uVar5);
LAB_007dca1c:
  local_58[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_58);
  FUN_00cbd7c0(param_1,local_70);
  return;
}


