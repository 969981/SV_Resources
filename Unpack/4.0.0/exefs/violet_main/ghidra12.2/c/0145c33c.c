/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0145c33c; name: FUN_0145c33c
 */


void FUN_0145c33c(long *param_1,long param_2,long param_3)

{
  short *psVar1;
  int *piVar2;
  byte *__s;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  size_t sVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  char *pcVar21;
  long lVar22;
  ulong uVar23;
  code *pcVar24;
  ulong uVar25;
  long *plVar26;
  long *plVar27;
  ulong uVar28;
  long lVar29;
  long *plVar30;
  ulong uVar31;
  long lVar32;
  undefined8 *puVar33;
  long local_e8;
  long local_e0;
  long *local_d8;
  long local_d0;
  long *local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  long *local_b0;
  long *plStack_a8;
  undefined4 local_78;
  undefined1 local_74;
  
  puVar7 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar7 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar12 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar12 == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = 0;
    if (*(long *)(lVar12 + 0x80) != 0) {
      lVar22 = *(long *)(lVar12 + *(long *)(lVar12 + 0x80) * 8 + -8);
    }
  }
  param_1[1] = lVar22;
  *(undefined4 *)(param_1 + 5) = 0;
  plVar14 = param_1 + 6;
  *plVar14 = 0;
  *param_1 = (long)&PTR_FUN_04595df8;
  param_1[4] = (long)&PTR_LAB_04595e30;
  param_1[7] = (long)&PTR_LAB_04595e60;
  param_1[9] = (long)&PTR_LAB_04595e60;
  param_1[0x11] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = -1;
  param_1[0x10] = -1;
  local_c0 = (long *)((ulong)local_c0._4_4_ << 0x20);
  FUN_0145e1e8(param_1 + 0x12,&local_c0);
  param_1[0x144] = 0;
  param_1[0x122] = 0x3f00000000;
  param_1[0x123] = 0;
  param_1[0x145] = 0;
  param_1[0x146] = 0;
  param_1[0x147] = 0;
  *(undefined4 *)((long)param_1 + 0xa4c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x148,0,1);
  FUN_0145e088(param_1 + 0x14a);
  param_1[0x158] = 0;
  param_1[0x157] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar22 = nn::os::GetTlsValue(DAT_04865a30);
  lVar12 = tpidr_el0;
  if ((((lVar22 == 0) || (*(long *)(lVar22 + 0x80) == 0)) ||
      (lVar22 = *(long *)(lVar22 + *(long *)(lVar22 + 0x80) * 8 + -8), lVar22 == 0)) &&
     (lVar22 = *(long *)(lVar12 + 0x30), lVar22 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04859438), iVar11 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar22 = DAT_04859430;
    *(long *)(lVar12 + 0x30) = DAT_04859430;
  }
  param_1[0x15b] = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  param_1[0x159] = lVar22;
  param_1[0x15a] = 0xaaaaaaaaaaaaaaa;
  param_1[0x15d] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar22 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar22 == 0) || (*(long *)(lVar22 + 0x80) == 0)) ||
      (lVar22 = *(long *)(lVar22 + *(long *)(lVar22 + 0x80) * 8 + -8), lVar22 == 0)) &&
     (lVar22 = *(long *)(lVar12 + 0x30), lVar22 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04859438), iVar11 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar22 = DAT_04859430;
    *(long *)(lVar12 + 0x30) = DAT_04859430;
  }
  __s = (byte *)(param_1 + 0x37e);
  param_1[0x15e] = lVar22;
  param_1[0x160] = 0;
  *(undefined4 *)(param_1 + 0x161) = 0;
  param_1[0x15f] = 0xaaaaaaaaaaaaaaa;
  param_1[0x162] = 0;
  *(undefined4 *)(param_1 + 0x163) = 0x3f800000;
  FUN_0145e0c8(param_1 + 0x164);
  param_1[0x171] = 0;
  *(undefined4 *)((long)param_1 + 0xb9c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x172,0,1);
  param_1[0x177] = 0;
  param_1[0x176] = 0;
  param_1[0x175] = 0;
  param_1[0x174] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar22 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar22 == 0) || (*(long *)(lVar22 + 0x80) == 0)) ||
      (lVar22 = *(long *)(lVar22 + *(long *)(lVar22 + 0x80) * 8 + -8), lVar22 == 0)) &&
     (lVar22 = *(long *)(lVar12 + 0x30), lVar22 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04859438), iVar11 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar22 = DAT_04859430;
    *(long *)(lVar12 + 0x30) = DAT_04859430;
  }
  param_1[0x178] = lVar22;
  param_1[0x179] = 0x1ffffffffffffff;
  param_1[0x17a] = 0;
  *(undefined4 *)(param_1 + 0x17b) = 0;
  param_1[0x17c] = 0;
  *(undefined4 *)((long)param_1 + 0xbf4) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x17d,0,1);
  param_1[0x17f] = 0;
  FUN_0145e108(param_1 + 0x180);
  nn::os::InitializeSemaphore((SemaphoreType *)(param_1 + 0x18d),1,1);
  param_1[0x193] = 0;
  FUN_0145ec6c(param_1 + 0x194);
  param_1[0x198] = 0;
  param_1[0x192] = (long)(param_1 + 0x193);
  nn::os::InitializeSemaphore((SemaphoreType *)(param_1 + 0x199),1,1);
  param_1[0x1a3] = 2;
  param_1[0x1a4] = 0x200000025;
  param_1[0x1a5] = 0x400000003;
  *(undefined4 *)(param_1 + 0x1a6) = 5;
  param_1[0x1a1] = 0;
  param_1[0x1a0] = 0;
  param_1[0x19f] = 0;
  param_1[0x19e] = 0;
  param_1[0x1a2] = 1;
  *(undefined8 *)((long)param_1 + 0xd34) = 0;
  *(undefined8 *)((long)param_1 + 0xd3c) = 0;
  *(undefined4 *)((long)param_1 + 0xd44) = 0;
  param_1[0x1a9] = (long)&DAT_cbf29ce484222645;
  param_1[0x1aa] = (long)&DAT_03c886bc;
  param_1[0x1ad] = 0;
  param_1[0x1ac] = 0;
  param_1[0x1ab] = 0;
  param_1[0x1ae] = (long)&DAT_cbf29ce484222645;
  param_1[0x1af] = (long)&DAT_03c886bc;
  param_1[0x1b6] = 0;
  param_1[0x1b5] = 0;
  param_1[0x1b4] = 0;
  param_1[0x1b0] = 0;
  param_1[0x1b1] = 0;
  param_1[0x1b2] = 0;
  FUN_0145f008(param_1 + 0x1b7);
  *(undefined1 *)(param_1 + 0x1bb) = 1;
  *(undefined8 *)((long)param_1 + 0xddc) = 0x434800004479c000;
  *(undefined1 *)((long)param_1 + 0xde4) = 0;
  param_1[0x1bd] = 0;
  FUN_0145df9c(param_1 + 0x1be);
  FUN_0145df9c((long)param_1 + 0xe0c);
  FUN_0145df9c(param_1 + 0x1c5);
  FUN_0145df9c((long)param_1 + 0xe44);
  FUN_0145df9c(param_1 + 0x1cc);
  FUN_0145df9c((long)param_1 + 0xe7c);
  FUN_0145df9c(param_1 + 0x1d3);
  FUN_0145df9c((long)param_1 + 0xeb4);
  FUN_0145df9c(param_1 + 0x1da);
  FUN_0145df9c((long)param_1 + 0xeec);
  FUN_0145df9c(param_1 + 0x1e1);
  FUN_0145df9c((long)param_1 + 0xf24);
  FUN_0145df9c(param_1 + 0x1e8);
  FUN_0145df9c((long)param_1 + 0xf5c);
  FUN_0145df9c(param_1 + 0x1ef);
  FUN_0145df9c((long)param_1 + 0xf94);
  FUN_0145df9c(param_1 + 0x1f6);
  FUN_0145df9c((long)param_1 + 0xfcc);
  FUN_0145df9c(param_1 + 0x1fd);
  FUN_0145df9c((long)param_1 + 0x1004);
  FUN_0145df9c(param_1 + 0x204);
  FUN_0145df9c((long)param_1 + 0x103c);
  FUN_0145df9c(param_1 + 0x20b);
  FUN_0145df9c((long)param_1 + 0x1074);
  FUN_0145df9c(param_1 + 0x212);
  FUN_0145df9c((long)param_1 + 0x10ac);
  FUN_0145df9c(param_1 + 0x219);
  FUN_0145df9c((long)param_1 + 0x10e4);
  FUN_0145df9c(param_1 + 0x220);
  FUN_0145df9c((long)param_1 + 0x111c);
  FUN_0145df9c(param_1 + 0x227);
  FUN_0145df9c((long)param_1 + 0x1154);
  FUN_0145df9c(param_1 + 0x22e);
  FUN_0145df9c((long)param_1 + 0x118c);
  FUN_0145df9c(param_1 + 0x235);
  FUN_0145df9c((long)param_1 + 0x11c4);
  FUN_0145df9c(param_1 + 0x23c);
  FUN_0145df9c((long)param_1 + 0x11fc);
  FUN_0145df9c(param_1 + 0x243);
  FUN_0145df9c((long)param_1 + 0x1234);
  FUN_0145df9c(param_1 + 0x24a);
  FUN_0145df9c((long)param_1 + 0x126c);
  FUN_0145df9c(param_1 + 0x251);
  FUN_0145df9c((long)param_1 + 0x12a4);
  FUN_0145df9c(param_1 + 600);
  FUN_0145df9c((long)param_1 + 0x12dc);
  FUN_0145df9c(param_1 + 0x25f);
  FUN_0145df9c((long)param_1 + 0x1314);
  FUN_0145df9c(param_1 + 0x266);
  FUN_0145df9c((long)param_1 + 0x134c);
  FUN_0145df9c(param_1 + 0x26d);
  FUN_0145df9c((long)param_1 + 0x1384);
  FUN_0145df9c(param_1 + 0x274);
  FUN_0145df9c((long)param_1 + 0x13bc);
  FUN_0145df9c(param_1 + 0x27b);
  FUN_0145df9c((long)param_1 + 0x13f4);
  FUN_0145df9c(param_1 + 0x282);
  FUN_0145df9c((long)param_1 + 0x142c);
  FUN_0145df9c(param_1 + 0x289);
  FUN_0145df9c((long)param_1 + 0x1464);
  FUN_0145df9c(param_1 + 0x290);
  FUN_0145df9c((long)param_1 + 0x149c);
  FUN_0145df9c(param_1 + 0x297);
  FUN_0145df9c((long)param_1 + 0x14d4);
  FUN_0145df9c(param_1 + 0x29e);
  FUN_0145df9c((long)param_1 + 0x150c);
  FUN_0145df9c(param_1 + 0x2a5);
  FUN_0145df9c((long)param_1 + 0x1544);
  FUN_0145df9c(param_1 + 0x2ac);
  FUN_0145df9c((long)param_1 + 0x157c);
  FUN_0145df9c(param_1 + 0x2b3);
  FUN_0145df9c((long)param_1 + 0x15b4);
  FUN_0145df9c(param_1 + 0x2ba);
  FUN_0145df9c((long)param_1 + 0x15ec);
  FUN_0145df9c(param_1 + 0x2c1);
  FUN_0145df9c((long)param_1 + 0x1624);
  FUN_0145df9c(param_1 + 0x2c8);
  FUN_0145df9c((long)param_1 + 0x165c);
  FUN_0145df9c(param_1 + 0x2cf);
  FUN_0145df9c((long)param_1 + 0x1694);
  FUN_0145df9c(param_1 + 0x2d6);
  FUN_0145df9c((long)param_1 + 0x16cc);
  FUN_0145df9c(param_1 + 0x2dd);
  FUN_0145df9c((long)param_1 + 0x1704);
  FUN_0145df9c(param_1 + 0x2e4);
  FUN_0145df9c((long)param_1 + 0x173c);
  FUN_0145df9c(param_1 + 0x2eb);
  FUN_0145df9c((long)param_1 + 0x1774);
  FUN_0145df9c(param_1 + 0x2f2);
  FUN_0145df9c((long)param_1 + 0x17ac);
  FUN_0145df9c(param_1 + 0x2f9);
  FUN_0145df9c((long)param_1 + 0x17e4);
  FUN_0145df9c(param_1 + 0x300);
  FUN_0145df9c((long)param_1 + 0x181c);
  FUN_0145df9c(param_1 + 0x307);
  FUN_0145df9c((long)param_1 + 0x1854);
  FUN_0145df9c(param_1 + 0x30e);
  FUN_0145df9c((long)param_1 + 0x188c);
  FUN_0145df9c(param_1 + 0x315);
  FUN_0145df9c((long)param_1 + 0x18c4);
  FUN_0145df9c(param_1 + 0x31c);
  FUN_0145df9c((long)param_1 + 0x18fc);
  FUN_0145df9c(param_1 + 0x323);
  FUN_0145df9c((long)param_1 + 0x1934);
  FUN_0145df9c(param_1 + 0x32a);
  FUN_0145df9c((long)param_1 + 0x196c);
  FUN_0145df9c(param_1 + 0x331);
  FUN_0145df9c((long)param_1 + 0x19a4);
  FUN_0145df9c(param_1 + 0x338);
  FUN_0145df9c((long)param_1 + 0x19dc);
  FUN_0145df9c(param_1 + 0x33f);
  FUN_0145df9c((long)param_1 + 0x1a14);
  FUN_0145df9c(param_1 + 0x346);
  FUN_0145df9c((long)param_1 + 0x1a4c);
  FUN_0145df9c(param_1 + 0x34d);
  FUN_0145df9c((long)param_1 + 0x1a84);
  FUN_0145df9c(param_1 + 0x354);
  FUN_0145df9c((long)param_1 + 0x1abc);
  FUN_0145df9c(param_1 + 0x35b);
  FUN_0145df9c((long)param_1 + 0x1af4);
  FUN_0145df9c(param_1 + 0x362);
  FUN_0145df9c((long)param_1 + 0x1b2c);
  FUN_0145df9c(param_1 + 0x369);
  FUN_0145df9c((long)param_1 + 0x1b64);
  FUN_0145df9c(param_1 + 0x370);
  FUN_0145df9c((long)param_1 + 0x1b9c);
  FUN_0145df9c(param_1 + 0x377);
  FUN_0145df9c((long)param_1 + 0x1bd4);
  plVar3 = param_1 + 0x388;
  memset(__s,0,0x50);
  FUN_00facfa8(plVar3);
  *(undefined1 *)(param_1 + 0x39c) = 0;
  param_1[0x392] = 0;
  param_1[0x391] = 0;
  param_1[0x390] = 0;
  param_1[0x38f] = 0;
  param_1[0x38e] = 0;
  param_1[0x38d] = 0;
  *(undefined1 *)(param_1 + 0x3a2) = 1;
  (*DAT_04859f60)(&local_c0,&DAT_04859f80);
  FUN_0145dfc8(plVar14,&local_c0);
  if (local_c0 != (long *)0x0) {
    plVar30 = local_c0 + 5;
    do {
      lVar12 = *plVar30;
      iVar11 = (int)lVar12 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar6) {
        *(int *)plVar30 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*local_c0 + 0x10))();
    }
    else if ((int)lVar12 == 0) {
LAB_0145de68:
      pcVar18 = "count != std::numeric_limits<uint32_t>::max()";
      pcVar19 = "DecrementReferenceInternal";
      pcVar20 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
      ;
      pcVar21 = "Reference counter underflows.";
      goto LAB_0145de38;
    }
  }
  lVar12 = param_1[1];
  param_1[10] = param_3;
  param_1[8] = lVar12;
  local_c0 = (long *)(PTR_DAT_047dcf80 + 0x10);
  memcpy(&local_b8,(void *)(param_2 + 8),0x50);
  local_b8 = &DAT_00003010 + *(long *)(param_1[6] + 0x30);
  local_74 = 1;
  *(undefined4 *)(param_1 + 0x1b3) = *(undefined4 *)(param_2 + 0x48);
  local_78 = 3;
  local_b0 = param_1 + 7;
  plStack_a8 = param_1 + 9;
  FUN_0145e550(&local_e0,lVar12,&local_c0);
  lVar12 = local_e0;
  local_e0 = 0;
  lVar22 = param_1[0xb];
  param_1[0xb] = lVar12;
  if (lVar22 == 0) {
    param_1[0xd] = local_d0;
    param_1[0xe] = (long)local_c8;
  }
  else {
    FUN_0213eeec(param_1 + 0xc);
    param_1[0xd] = local_d0;
    param_1[0xe] = (long)local_c8;
    lVar12 = param_1[0xb];
  }
  param_1[0xc] = (long)local_d8;
  FUN_0145dfb0(lVar12,&LAB_00fe9e38,param_1);
  FUN_0145dfbc(param_1[0xb],&LAB_0145fae0,param_1);
  *(undefined1 **)(param_1[0xb] + 0x1180) = &LAB_010ece9c;
  FUN_0145e254(param_1 + 0x1b4,(long)(int)param_1[0x1b3]);
  plVar27 = (long *)param_1[0x1b5];
  for (plVar30 = (long *)param_1[0x1b4]; plVar30 != plVar27; plVar30 = plVar30 + 7) {
    lVar22 = *(long *)(DAT_0485a0f0 + 0x38) - *(long *)(DAT_0485a0f0 + 0x30) >> 4;
    uVar31 = lVar22 * -0x5555555555555555;
    lVar12 = *plVar30;
    uVar28 = plVar30[1] - lVar12 >> 3;
    if (uVar28 < uVar31) {
      if ((ulong)(plVar30[2] - plVar30[1] >> 3) < uVar31 - uVar28) {
        uVar25 = plVar30[4];
        if (0x7ffffffffffffffe < uVar25) {
          uVar25 = 0x7fffffffffffffff;
        }
        if (uVar25 < uVar31) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar12 = plVar30[2] - lVar12;
        uVar23 = lVar12 >> 2;
        if (uVar31 <= uVar23) {
          uVar31 = uVar23;
        }
        plVar26 = plVar30 + 3;
        if (uVar25 >> 1 <= (ulong)(lVar12 >> 3)) {
          uVar31 = uVar25;
        }
        if (uVar31 == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = (**(code **)(*(long *)*plVar26 + 0x10))((long *)*plVar26,uVar31 << 3,8);
          if (lVar12 == 0) {
            (**(code **)(*(long *)*plVar26 + 0xe8))();
          }
        }
        puVar33 = (undefined8 *)(lVar12 + uVar28 * 8);
        lVar29 = lVar22 * 0x5555555555555558 + uVar28 * -8;
        puVar16 = puVar33;
        do {
          lVar32 = *plVar26;
          if (((DAT_04865a38 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar13 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar13 == 0) {
            *puVar16 = 0;
          }
          else {
            if (0xf < *(ulong *)(lVar13 + 0x80)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(long *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = lVar32;
            *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
            *puVar16 = 0;
            *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          }
          puVar16 = puVar16 + 1;
          lVar29 = lVar29 + -8;
        } while (lVar29 != 0);
        lVar29 = *plVar30;
        lVar32 = plVar30[1];
        if (lVar32 != lVar29) {
          do {
            puVar33 = puVar33 + -1;
            lVar32 = lVar32 + -8;
            FUN_0145f7f0(plVar26,puVar33,lVar32);
          } while (lVar29 != lVar32);
          lVar29 = *plVar30;
        }
        lVar32 = plVar30[2];
        *plVar30 = (long)puVar33;
        plVar30[1] = lVar12 + lVar22 * 0x5555555555555558;
        plVar30[2] = lVar12 + uVar31 * 8;
        if (lVar29 != 0) {
          plVar26 = (long *)*plVar26;
          uVar31 = (**(code **)(*plVar26 + 0xf8))(plVar26);
          if (((uVar31 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
            (**(code **)(*plVar26 + 0x18))(plVar26,lVar29,lVar32 - lVar29,8);
          }
          else {
            FUN_00c48fe8(plVar26,lVar29,lVar32 - lVar29,8);
          }
        }
      }
      else {
        FUN_0145f9d0(plVar30);
      }
    }
    else if (uVar31 < uVar28) {
      plVar30[1] = lVar12 + lVar22 * 0x5555555555555558;
    }
  }
  local_e0 = 0;
  plVar30 = (long *)FUN_0145b26c(&local_e8,param_1[1],&local_e0);
  if (plVar30 == (long *)0x0) goto LAB_0145cf74;
  FUN_00f1b0c8(plVar30);
  lVar12 = plVar30[6];
  if (*(long *)(lVar12 + 0x10) == 0) goto LAB_0145ddf8;
  psVar1 = (short *)(lVar12 + 0x1a);
  do {
    sVar4 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar4 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar4 != 0) {
    if (sVar4 != -1) goto LAB_0145cf74;
LAB_0145de18:
    pcVar18 = "count != 0";
    pcVar19 = "AddReference";
    pcVar20 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
    ;
    pcVar21 = "Reference counter overflows.";
LAB_0145de38:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(pcVar18,pcVar19,pcVar20,0x58,pcVar21);
  }
  uVar17 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
  *(undefined8 *)(lVar12 + 8) = uVar17;
  *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
LAB_0145cf74:
  (**(code **)(*plVar30 + 0x88))(plVar30,0);
  pcVar24 = (code *)plVar30[0x71];
  if (pcVar24 != (code *)0x0) {
    plVar30[0x72] = 0;
    plVar30[0x73] = 0;
    plVar30[0x70] = 0;
    plVar30[0x71] = 0;
    (*pcVar24)(plVar30 + 0x74);
  }
  plVar30[0x70] = (long)&LAB_00e425a4;
  plVar30[0x71] = (long)&LAB_02b2c5dc;
  plVar30[0x72] = (long)&LAB_02b2c5e0;
  plVar30[0x74] = (long)param_1;
  plVar30[0x73] = (long)&LAB_02b2c5ec;
  plVar27 = (long *)param_1[0x174];
  param_1[0x174] = 0;
  if (plVar27 != (long *)0x0) {
    lVar12 = plVar27[6];
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar27 + 0x50))();
    }
    else if (sVar4 == 0) goto LAB_0145de40;
  }
  param_1[0x174] = (long)plVar30;
  FUN_0145f514(param_1 + 0x175);
  local_e0 = 0;
  lVar12 = FUN_0145b26c(&local_e8,param_1[1],&local_e0);
  if (lVar12 != 0) {
    FUN_00f1b0c8(lVar12);
    lVar22 = *(long *)(lVar12 + 0x30);
    if (*(long *)(lVar22 + 0x10) == 0) {
LAB_0145ddf8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar22 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 0) {
      uVar17 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
      *(undefined8 *)(lVar22 + 8) = uVar17;
      *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) goto LAB_0145de18;
  }
  pcVar24 = *(code **)(lVar12 + 0x388);
  if (pcVar24 != (code *)0x0) {
    *(undefined8 *)(lVar12 + 0x390) = 0;
    *(undefined8 *)(lVar12 + 0x398) = 0;
    *(undefined8 *)(lVar12 + 0x380) = 0;
    *(undefined8 *)(lVar12 + 0x388) = 0;
    (*pcVar24)(lVar12 + 0x3a0);
  }
  *(undefined1 **)(lVar12 + 0x380) = &LAB_00dee640;
  *(undefined1 **)(lVar12 + 0x388) = &LAB_02b2c5f8;
  *(undefined1 **)(lVar12 + 0x390) = &LAB_02b2c5fc;
  *(long **)(lVar12 + 0x3a0) = param_1;
  *(undefined1 **)(lVar12 + 0x398) = &LAB_02b2c608;
  plVar30 = (long *)param_1[0x17f];
  param_1[0x17f] = 0;
  if (plVar30 != (long *)0x0) {
    lVar22 = plVar30[6];
    psVar1 = (short *)(lVar22 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar22 + 0x10) = 0;
      (**(code **)(*plVar30 + 0x50))();
    }
    else if (sVar4 == 0) {
LAB_0145de40:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  plVar30 = (long *)(lVar12 + 0x1d0);
  plVar27 = param_1 + 0x382;
  param_1[0x17f] = lVar12;
  lVar22 = nn::os::GetCurrentThread();
LAB_0145d114:
  if (*plVar30 == 0) goto code_r0x0145d11c;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x1d8));
  do {
    if (*plVar30 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x1d8));
        while (*plVar30 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar30,0x10);
          if (bVar6) {
            *plVar30 = lVar22;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_0145d124;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar30,0x10);
    if (bVar6) {
      *plVar30 = lVar22;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0145d124:
  if (((*PTR_DAT_047d91d0 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_047d91d0), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047dcf90,PTR_DAT_047d91d8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d91d0);
  }
  lVar22 = *(long *)PTR_DAT_047d91d8;
  *(long *)PTR_DAT_047d91e0 = lVar22;
  FUN_00e220f4(lVar12,*(undefined8 *)(lVar22 + 0x40),0);
  FUN_00e220f4(lVar12,0,param_1[0x174]);
  lVar29 = param_1[0x174];
  plVar30 = (long *)(lVar29 + 0x1d0);
  lVar22 = nn::os::GetCurrentThread();
  while (*plVar30 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar30,0x10);
    if (bVar6) {
      *plVar30 = lVar22;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_0145d18c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar29 + 0x1d8));
  do {
    if (*plVar30 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar29 + 0x1d8));
        while (*plVar30 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar30,0x10);
          if (bVar6) {
            *plVar30 = lVar22;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_0145d18c;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar30,0x10);
    if (bVar6) {
      *plVar30 = lVar22;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0145d18c:
  puVar7 = PTR_DAT_047d8d80;
  if (((*PTR_DAT_047d8d80 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_047d8d80), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047dcf10,PTR_DAT_047d8d88,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8d80);
  }
  puVar9 = PTR_DAT_047d8d90;
  puVar8 = PTR_DAT_047d8d88;
  lVar22 = *(long *)PTR_DAT_047d8d88;
  *(long *)PTR_DAT_047d8d90 = lVar22;
  FUN_00e220f4(lVar29,0,*(undefined8 *)(lVar22 + 0x30));
  *(undefined8 *)(lVar29 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar29 + 0x1d8));
  *(undefined8 *)(lVar12 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x1d8));
  param_1[0x19e] = 0x3c0;
  param_1[0x19f] = 0x21c;
  param_1[0x1a7] = 0x200000008;
  *(undefined4 *)(param_1 + 0x1a4) = 0x35;
  plVar14 = (long *)FUN_0145dfac(plVar14);
  local_e0 = *plVar14;
  lVar22 = FUN_00cf3764(&local_e8,*(undefined8 *)(local_e0 + 8),&local_e0);
  lVar12 = 0;
  if (lVar22 != 0) {
    piVar2 = (int *)(lVar22 + 0x28);
    do {
      iVar11 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    lVar12 = lVar22;
  }
  FUN_0117e220(lVar12,param_1 + 0x19e,1,1,0);
  plVar14 = (long *)param_1[0x11];
  param_1[0x11] = 0;
  if (plVar14 != (long *)0x0) {
    plVar30 = plVar14 + 5;
    do {
      lVar12 = *plVar30;
      iVar11 = (int)lVar12 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar6) {
        *(int *)plVar30 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar14 + 0x10))();
      goto LAB_0145d290;
    }
    if ((int)lVar12 != 0) goto LAB_0145d290;
    goto LAB_0145de68;
  }
LAB_0145d290:
  param_1[0x11] = lVar22;
  local_e0 = 0;
  plVar14 = (long *)FUN_0145b26c(&local_e8,param_1[1],&local_e0);
  if (plVar14 == (long *)0x0) goto LAB_0145d2e8;
  FUN_00f1b0c8(plVar14);
  lVar12 = plVar14[6];
  if (*(long *)(lVar12 + 0x10) == 0) goto LAB_0145ddf8;
  psVar1 = (short *)(lVar12 + 0x1a);
  do {
    sVar4 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar4 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar4 != 0) {
    if (sVar4 != -1) goto LAB_0145d2e8;
    goto LAB_0145de18;
  }
  uVar17 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
  *(undefined8 *)(lVar12 + 8) = uVar17;
  *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
LAB_0145d2e8:
  (**(code **)(*plVar14 + 0x88))(plVar14,0);
  pcVar24 = (code *)plVar14[0x71];
  if (pcVar24 != (code *)0x0) {
    plVar14[0x72] = 0;
    plVar14[0x73] = 0;
    plVar14[0x70] = 0;
    plVar14[0x71] = 0;
    (*pcVar24)(plVar14 + 0x74);
  }
  plVar14[0x70] = (long)FUN_021407b8;
  plVar14[0x72] = (long)&LAB_02b2c618;
  plVar14[0x74] = (long)param_1;
  plVar14[0x71] = (long)&LAB_02b2c614;
  plVar30 = plVar14 + 0x3a;
  plVar14[0x73] = (long)&LAB_02b2c624;
  lVar12 = nn::os::GetCurrentThread();
  while (*plVar30 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar30,0x10);
    if (bVar6) {
      *plVar30 = lVar12;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_0145d36c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar14 + 0x3b));
  do {
    if (*plVar30 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar14 + 0x3b));
        while (*plVar30 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar30,0x10);
          if (bVar6) {
            *plVar30 = lVar12;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_0145d36c;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar30,0x10);
    if (bVar6) {
      *plVar30 = lVar12;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0145d36c:
  if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d8d80), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047dcf10,PTR_DAT_047d8d88,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8d80);
  }
  lVar12 = *(long *)puVar8;
  *(long *)puVar9 = lVar12;
  FUN_00e220f4(plVar14,*(undefined8 *)(lVar12 + 0x28),0);
  if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d8d80), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047dcf10,PTR_DAT_047d8d88,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8d80);
  }
  lVar12 = *(long *)puVar8;
  *(long *)puVar9 = lVar12;
  FUN_00e220f4(plVar14,0,*(undefined8 *)(lVar12 + 0x30));
  plVar30 = (long *)param_1[0x1a8];
  param_1[0x1a8] = 0;
  if (plVar30 != (long *)0x0) {
    lVar12 = plVar30[6];
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar30 + 0x50))();
    }
    else if (sVar4 == 0) goto LAB_0145de40;
  }
  param_1[0x1a8] = (long)plVar14;
  plVar14[0x3a] = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar14 + 0x3b));
  puVar10 = PTR_s_VfxDepthCopyPath_047dcf88;
  sVar15 = strlen(PTR_s_VfxDepthCopyPath_047dcf88);
  param_1[0x1b0] = sVar15;
  plVar14 = (long *)param_1[0x1b1];
  param_1[0x1ae] = 0x7a55ce8a291a2bc6;
  param_1[0x1af] = (long)puVar10;
  param_1[0x1b1] = 0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  param_1[0x1b1] = 0;
  puVar16 = (undefined8 *)FUN_0166cefc();
  local_e0 = -0x6b32eda3f6b3e26;
  local_d8 = (long *)0x3c4a48d;
  local_d0 = 0x1b;
  local_c8 = (long *)0x0;
  FUN_00dfeda8(&local_e8,*puVar16,param_1 + 0x1ae,&local_e0,0);
  plVar14 = (long *)param_1[0x1b2];
  param_1[0x1b2] = 0;
  if (plVar14 != (long *)0x0) {
    plVar30 = plVar14 + 5;
    do {
      lVar12 = *plVar30;
      iVar11 = (int)lVar12 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar6) {
        *(int *)plVar30 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar14 + 0x10))();
    }
    else if ((int)lVar12 == 0) goto LAB_0145de68;
  }
  lVar12 = local_e8;
  local_e8 = 0;
  param_1[0x1b2] = lVar12;
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
    lVar12 = param_1[0x1b2];
  }
  *(undefined4 *)(lVar12 + 0xf0) = 0xffffff9c;
  local_e0 = 0;
  plVar14 = (long *)FUN_0145b26c(&local_e8,param_1[1],&local_e0);
  if (plVar14 != (long *)0x0) {
    FUN_00f1b0c8(plVar14);
    lVar12 = plVar14[6];
    if (*(long *)(lVar12 + 0x10) == 0) goto LAB_0145ddf8;
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 0) {
      uVar17 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
      *(undefined8 *)(lVar12 + 8) = uVar17;
      *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) goto LAB_0145de18;
  }
  (**(code **)(*plVar14 + 0x88))(plVar14,0);
  pcVar24 = (code *)plVar14[0x71];
  if (pcVar24 != (code *)0x0) {
    plVar14[0x72] = 0;
    plVar14[0x73] = 0;
    plVar14[0x70] = 0;
    plVar14[0x71] = 0;
    (*pcVar24)(plVar14 + 0x74);
  }
  plVar14[0x70] = (long)&LAB_00e02808;
  plVar14[0x72] = (long)&LAB_02b2c634;
  plVar14[0x74] = (long)param_1;
  plVar14[0x71] = (long)&LAB_02b2c630;
  plVar30 = plVar14 + 0x3a;
  plVar14[0x73] = (long)&LAB_02b2c640;
  lVar12 = nn::os::GetCurrentThread();
  while (*plVar30 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar30,0x10);
    if (bVar6) {
      *plVar30 = lVar12;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_0145d584;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar14 + 0x3b));
  do {
    if (*plVar30 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar14 + 0x3b));
        while (*plVar30 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar30,0x10);
          if (bVar6) {
            *plVar30 = lVar12;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_0145d584;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar30,0x10);
    if (bVar6) {
      *plVar30 = lVar12;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0145d584:
  if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d8d80), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047dcf10,PTR_DAT_047d8d88,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8d80);
  }
  lVar12 = *(long *)puVar8;
  *(long *)puVar9 = lVar12;
  FUN_00e220f4(plVar14,*(undefined8 *)(lVar12 + 0x28),0);
  if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d8d80), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047dcf10,PTR_DAT_047d8d88,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8d80);
  }
  lVar12 = *(long *)puVar8;
  *(long *)puVar9 = lVar12;
  FUN_00e220f4(plVar14,0,*(undefined8 *)(lVar12 + 0x30));
  plVar30 = (long *)param_1[0x1ad];
  param_1[0x1ad] = 0;
  if (plVar30 == (long *)0x0) {
LAB_0145d5f4:
    param_1[0x1ad] = (long)plVar14;
    plVar14[0x3a] = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar14 + 0x3b));
    FUN_00fab56c(__s);
    *(undefined2 *)((long)param_1 + 0x1bf1) = 0x701;
    *(undefined1 *)((long)param_1 + 0x1bf6) = 0;
    *__s = *__s | 1;
    *(undefined1 *)((long)param_1 + 0x1bf3) = 0;
    *(undefined2 *)((long)param_1 + 0x1bf4) = 0x700;
    FUN_00fab594(plVar27);
    *(undefined1 *)(param_1 + 0x382) = 1;
    param_1[0x385] = (long)__s;
    lVar12 = FUN_00fac5d0(plVar27);
    plVar14 = (long *)param_1[1];
    uVar17 = (**(code **)(*plVar14 + 0x10))(plVar14,lVar12,8);
    local_c8 = (long *)0x8;
    local_e0 = 0;
    local_d8 = plVar14;
    local_d0 = lVar12;
    FUN_0145e148(param_1 + 0x38d,uVar17);
    param_1[0x390] = (long)local_c8;
    param_1[0x38f] = local_d0;
    param_1[0x38e] = (long)local_d8;
    FUN_0145e148(&local_e0,0);
    FUN_00fac5dc(plVar3,param_1[0x38d],lVar12);
    FUN_00fad338(plVar3,&DAT_00003010 + *(long *)(param_1[6] + 0x30),plVar27);
    lVar12 = param_1[0xb];
    *(long **)(lVar12 + 0x12d0) = param_1 + 0x39e;
    *(undefined8 *)(lVar12 + 0x12f8) = 0x20;
    *(undefined1 **)(param_1[0xb] + 0x1200) = &LAB_0213f2b0;
    return;
  }
  lVar12 = plVar30[6];
  psVar1 = (short *)(lVar12 + 0x1a);
  do {
    sVar4 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar4 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar4 == 1) {
    *(undefined8 *)(lVar12 + 0x10) = 0;
    (**(code **)(*plVar30 + 0x50))();
    goto LAB_0145d5f4;
  }
  if (sVar4 != 0) goto LAB_0145d5f4;
  goto LAB_0145de40;
code_r0x0145d11c:
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar30,0x10);
  if (bVar6) {
    *plVar30 = lVar22;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_0145d124;
  goto LAB_0145d114;
}


