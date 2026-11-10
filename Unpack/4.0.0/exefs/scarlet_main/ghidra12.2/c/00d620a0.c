/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d620a0; name: FUN_00d620a0
 */


void FUN_00d620a0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 auStack_f0 [8];
  long local_e8;
  undefined1 auStack_b0 [8];
  long local_a8;
  undefined1 local_70;
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    lVar4 = 0;
    iVar5 = 0;
    lVar6 = 0;
    uVar3 = 1;
    do {
      lVar1 = param_1 + lVar6;
      if (*(char *)(lVar1 + 0x5e8) == '\0') {
        lVar2 = param_1 + lVar4;
        if ((((*(long *)(lVar2 + 0x58) == 0) ||
             ((*(byte *)(*(long *)(lVar2 + 0x58) + 0x1e8) & 1) == 0)) ||
            (*(long *)(lVar2 + 0x2d8) == 0)) ||
           ((*(byte *)(*(long *)(lVar2 + 0x2d8) + 0x1e8) & 1) == 0)) {
          uVar3 = 0;
        }
        else {
          FUN_00fb9e50(&local_108,lVar2 + 0x2d0,lVar2 + 0x50);
          *(undefined8 *)(lVar1 + 0x560) = local_f8;
          *(undefined8 *)(lVar1 + 0x558) = local_100;
          *(undefined8 *)(lVar1 + 0x550) = local_108;
          FUN_00fb9ce0(lVar1 + 0x568,auStack_f0);
          FUN_00fb9ce0(lVar1 + 0x5a8,auStack_b0);
          FUN_00db239c(auStack_b0);
          FUN_00db239c(auStack_f0);
          switch(iVar5) {
          case 0:
            if (((*(long *)(param_1 + 0x5b0) == 0) ||
                ((*(byte *)(*(long *)(param_1 + 0x5b0) + 0x1e8) & 1) != 0)) &&
               ((*(long *)(param_1 + 0x570) == 0 ||
                ((*(byte *)(*(long *)(param_1 + 0x570) + 0x1e8) & 1) != 0)))) {
              local_108 = *(undefined8 *)(param_1 + 0x550);
              local_100 = *(undefined8 *)(param_1 + 0x558);
              local_f8 = *(undefined8 *)(param_1 + 0x560);
            }
            else {
              local_100 = 0;
              local_f8 = 0;
              local_108 = 0;
            }
            FUN_011dbfac(param_1 + 0xb90,&local_108,*(undefined8 *)(param_1 + 8));
            break;
          case 2:
            FUN_0133e104(param_1);
            break;
          case 3:
            FUN_0108afb0(param_1);
            break;
          case 4:
            FUN_01e3e070(param_1);
            break;
          case 5:
            FUN_01e3e218(param_1);
            break;
          case 6:
            FUN_01e3d73c(param_1);
            break;
          case 7:
            FUN_01280a18(param_1);
            break;
          case 8:
            FUN_0131604c(param_1);
            break;
          case 9:
            local_108 = *(undefined8 *)(param_1 + 0xaf0);
            local_100 = *(undefined8 *)(param_1 + 0xaf8);
            local_f8 = *(undefined8 *)(param_1 + 0xb00);
            FUN_00fb9f24(auStack_f0,param_1 + 0xb08);
            FUN_00fb9f24(auStack_b0,param_1 + 0xb48);
            local_70 = *(undefined1 *)(param_1 + 0xb88);
            if (((local_a8 == 0) || ((*(byte *)(local_a8 + 0x1e8) & 1) != 0)) &&
               ((local_e8 == 0 || ((*(byte *)(local_e8 + 0x1e8) & 1) != 0)))) {
              local_120 = local_108;
              local_118 = local_100;
              local_110 = local_f8;
            }
            else {
              local_118 = 0;
              local_110 = 0;
              local_120 = 0;
            }
            FUN_0147d2f0(param_1 + 0x1510,&local_120);
            FUN_00db239c(auStack_b0);
            FUN_00db239c(auStack_f0);
          }
          *(undefined1 *)(lVar1 + 0x5e8) = 1;
        }
      }
      lVar6 = lVar6 + 0xa0;
      iVar5 = iVar5 + 1;
      lVar4 = lVar4 + 0x40;
    } while (lVar6 != 0x640);
    *(undefined1 *)(param_1 + 0x40) = uVar3;
  }
  return;
}


