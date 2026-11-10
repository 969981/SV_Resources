/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0031bb00; name: FUN_0031bb00
 */


undefined8 FUN_0031bb00(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *__s;
  undefined8 uVar4;
  void *__ptr;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  char *local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 auStack_c8 [32];
  char *local_a8;
  size_t local_a0;
  char *local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (*(ulong **)(param_1 + 0x30) != (ulong *)0x0) {
    if (*(long *)(param_1 + 0x58) == 0) {
      uVar5 = **(ulong **)(param_1 + 0x30);
      if (((uVar5 != *(ulong *)(*(long *)PTR_DAT_047ccae0 + 0x38)) &&
          (*(long *)((uVar5 & 0xfffffffffffffffc) + 0x20) !=
           *(long *)((*(ulong *)(*(long *)PTR_DAT_047ccae0 + 0x38) & 0xfffffffffffffffc) + 0x20)))
         && (iVar3 = FUN_00368130(), iVar3 != 0)) {
        __s = (char *)FUN_0036a0b0((**(ulong **)(param_1 + 0x30) & 0xfffffffffffffffc) + 0x20,2);
        local_78 = "Received http2 header with status: ";
        uStack_70 = 0x23;
        local_a0 = 0;
        local_a8 = __s;
        if (__s != (char *)0x0) {
          local_a0 = strlen(__s);
        }
        FUN_003959c0(&local_48,&local_78,&local_a8);
                    /* try { // try from 0031bbb4 to 0031bbdf has its CatchHandler @ 0031be48 */
        FUN_003673f0(&local_78,"Received http2 :status header with non-200 OK status");
        uVar4 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/http/client/http_client_filter.cc"
                             ,0x82,&local_78,0,0);
                    /* try { // try from 0031bbe4 to 0031bc1f has its CatchHandler @ 0031be4c */
        FUN_00367770(&local_a8,__s);
        uVar4 = FUN_00351fa0(uVar4,0xb,&local_a8);
        iVar3 = atoi(__s);
        iVar3 = FUN_0037a720(iVar3);
        uVar4 = FUN_00351770(uVar4,3,(long)iVar3);
        local_d0 = local_38;
        uStack_d8 = uStack_40;
        local_e0 = local_48;
        local_48 = 0;
        uStack_40 = 0;
        local_38 = 0;
                    /* try { // try from 0031bc3c to 0031bc57 has its CatchHandler @ 0031be10 */
        FUN_003679b0(auStack_c8,&local_e0);
        uVar4 = FUN_00351fa0(uVar4,5,auStack_c8);
        if ((local_e0 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_d0);
        }
                    /* try { // try from 0031bc74 to 0031bc7b has its CatchHandler @ 0031be0c */
        free(__s);
        if ((local_48 & 1) == 0) {
          return uVar4;
        }
        FUN_0049e790(PTR_LAB_047cba48,local_38);
        return uVar4;
      }
    }
    FUN_00377560(param_1,2);
  }
  if (*(ulong **)(param_1 + 0x50) != (ulong *)0x0) {
    FUN_00366d00(&local_78,(**(ulong **)(param_1 + 0x50) & 0xfffffffffffffffc) + 0x20);
    uStack_f8 = uStack_70;
    local_100 = local_78;
    uStack_e8 = uStack_60;
    uStack_f0 = uStack_68;
    uVar5 = **(ulong **)(param_1 + 0x50) & 0xfffffffffffffffc;
    uStack_118 = *(undefined8 *)(uVar5 + 0x28);
    local_120 = *(undefined8 *)(uVar5 + 0x20);
    uStack_108 = *(undefined8 *)(uVar5 + 0x38);
    uStack_110 = *(undefined8 *)(uVar5 + 0x30);
    iVar3 = FUN_00368280(&local_100,&local_120);
    if (iVar3 == 0) {
      FUN_003775f0(*(undefined8 *)(param_1 + 0x50),&local_78);
    }
    else if ((local_78 != (char *)0x0) && (plVar6 = *(long **)local_78, plVar6 != (long *)0x0)) {
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(local_78 + 0x18))(*(undefined8 *)(local_78 + 0x20));
      }
    }
  }
  if (*(ulong **)(param_1 + 0x90) == (ulong *)0x0) {
    return 0;
  }
  uVar5 = **(ulong **)(param_1 + 0x90);
  if (((uVar5 != *(ulong *)(*(long *)PTR_DAT_047ccae0 + 0x220)) &&
      (*(long *)((uVar5 & 0xfffffffffffffffc) + 0x20) !=
       *(long *)((*(ulong *)(*(long *)PTR_DAT_047ccae0 + 0x220) & 0xfffffffffffffffc) + 0x20))) &&
     (iVar3 = FUN_00368130(), iVar3 != 0)) {
    uVar5 = **(ulong **)(param_1 + 0x90) & 0xfffffffffffffffc;
    uStack_138 = *(undefined8 *)(uVar5 + 0x28);
    local_140 = *(undefined8 *)(uVar5 + 0x20);
    uStack_128 = *(undefined8 *)(uVar5 + 0x38);
    uStack_130 = *(undefined8 *)(uVar5 + 0x30);
    iVar3 = FUN_00368300(&local_140,"application/grpc",0x10);
    uVar5 = **(ulong **)(param_1 + 0x90) & 0xfffffffffffffffc;
    if (iVar3 != 0) {
      if (*(long *)(uVar5 + 0x20) == 0) {
        cVar1 = *(char *)(uVar5 + 0x39);
      }
      else {
        cVar1 = *(char *)(*(long *)(uVar5 + 0x30) + 0x10);
      }
      if ((cVar1 == '+') || (cVar1 == ';')) goto LAB_0031bde4;
    }
    __ptr = (void *)FUN_0036a0b0(uVar5 + 0x20,2);
    free(__ptr);
  }
LAB_0031bde4:
  FUN_00377560(param_1,0xe);
  return 0;
}


