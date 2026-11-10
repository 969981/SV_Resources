/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00475390; name: FUN_00475390
 */


undefined8 FUN_00475390(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = param_2[0x1a];
  uVar3 = (ulong)(uint)uVar4;
  puVar1 = param_2 + 10;
  *(undefined1 *)((long)puVar1 + uVar3) = 0x80;
  lVar5 = uVar3 + 1;
  if (0x6f < (uint)uVar4) {
    memset((void *)((long)puVar1 + lVar5),0,0x7f - uVar3);
    FUN_00475590(param_2,puVar1,1);
    lVar5 = 0;
  }
  memset((void *)((long)puVar1 + lVar5),0,0x70 - lVar5);
  uVar4 = (param_2[8] & 0xff00ff00ff00ff00) >> 8 | (param_2[8] & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  uVar3 = (param_2[9] & 0xff00ff00ff00ff00) >> 8 | (param_2[9] & 0xff00ff00ff00ff) << 8;
  uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
  param_2[0x18] = uVar3 >> 0x20 | uVar3 << 0x20;
  param_2[0x19] = uVar4 >> 0x20 | uVar4 << 0x20;
  FUN_00475590(param_2,puVar1,1);
  uVar2 = 0;
  if (param_1 != (ulong *)0x0) {
    switch(*(int *)((long)param_2 + 0xd4) - 0x1cU >> 2 | *(int *)((long)param_2 + 0xd4) << 0x1e) {
    case 0:
      uVar4 = (*param_2 & 0xff00ff00ff00ff00) >> 8 | (*param_2 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      *param_1 = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar4 = (param_2[1] & 0xff00ff00ff00ff00) >> 8 | (param_2[1] & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      param_1[1] = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar4 = (param_2[2] & 0xff00ff00ff00ff00) >> 8 | (param_2[2] & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      param_1[2] = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar4 = param_2[3];
      *(char *)(param_1 + 3) = (char)(uVar4 >> 0x38);
      *(char *)((long)param_1 + 0x19) = (char)(uVar4 >> 0x30);
      *(char *)((long)param_1 + 0x1a) = (char)(uVar4 >> 0x28);
      *(char *)((long)param_1 + 0x1b) = (char)(uVar4 >> 0x20);
      break;
    case 1:
      uVar4 = (*param_2 & 0xff00ff00ff00ff00) >> 8 | (*param_2 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      *param_1 = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar4 = (param_2[1] & 0xff00ff00ff00ff00) >> 8 | (param_2[1] & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      param_1[1] = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar4 = (param_2[2] & 0xff00ff00ff00ff00) >> 8 | (param_2[2] & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      param_1[2] = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar4 = (param_2[3] & 0xff00ff00ff00ff00) >> 8 | (param_2[3] & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      param_1[3] = uVar4 >> 0x20 | uVar4 << 0x20;
      break;
    default:
      goto switchD_00475448_caseD_2;
    case 5:
      uVar4 = (*param_2 & 0xff00ff00ff00ff00) >> 8 | (*param_2 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      *param_1 = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar4 = (param_2[1] & 0xff00ff00ff00ff00) >> 8 | (param_2[1] & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      param_1[1] = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar4 = (param_2[2] & 0xff00ff00ff00ff00) >> 8 | (param_2[2] & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      param_1[2] = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar4 = (param_2[3] & 0xff00ff00ff00ff00) >> 8 | (param_2[3] & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      param_1[3] = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar4 = (param_2[4] & 0xff00ff00ff00ff00) >> 8 | (param_2[4] & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      param_1[4] = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar4 = (param_2[5] & 0xff00ff00ff00ff00) >> 8 | (param_2[5] & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      param_1[5] = uVar4 >> 0x20 | uVar4 << 0x20;
      break;
    case 9:
      uVar4 = (*param_2 & 0xff00ff00ff00ff00) >> 8 | (*param_2 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      *param_1 = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar4 = (param_2[1] & 0xff00ff00ff00ff00) >> 8 | (param_2[1] & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      param_1[1] = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar4 = (param_2[2] & 0xff00ff00ff00ff00) >> 8 | (param_2[2] & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      param_1[2] = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar4 = (param_2[3] & 0xff00ff00ff00ff00) >> 8 | (param_2[3] & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      param_1[3] = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar4 = (param_2[4] & 0xff00ff00ff00ff00) >> 8 | (param_2[4] & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      param_1[4] = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar4 = (param_2[5] & 0xff00ff00ff00ff00) >> 8 | (param_2[5] & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      param_1[5] = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar4 = (param_2[6] & 0xff00ff00ff00ff00) >> 8 | (param_2[6] & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      param_1[6] = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar4 = (param_2[7] & 0xff00ff00ff00ff00) >> 8 | (param_2[7] & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      param_1[7] = uVar4 >> 0x20 | uVar4 << 0x20;
    }
    uVar2 = 1;
  }
switchD_00475448_caseD_2:
  return uVar2;
}


