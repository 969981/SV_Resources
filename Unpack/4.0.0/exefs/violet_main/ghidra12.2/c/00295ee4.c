/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00295ee4; name: FUN_00295ee4
 */


void FUN_00295ee4(long param_1)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  void *__ptr;
  ulong uVar7;
  long *plVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *local_70 [4];
  ulong *local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_28;
  
  if (*(long *)(param_1 + 0x38) != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_50 = (ulong *)0x0;
                    /* try { // try from 00295f08 to 00295f1f has its CatchHandler @ 0029614c */
  FUN_00298788(*(undefined8 *)(param_1 + 0xf0),&local_28,&local_38,&local_40,&local_48,&local_50);
  if ((((local_38 == 0 && local_28 == 0) && local_40 == 0) && local_48 == 0) &&
     ((local_50 == (ulong *)0x0 || (*local_50 < 2)))) {
    if (*(char *)(param_1 + 0x131) != '\0') {
      if (PTR___tls_init_047cc328 != (undefined *)0x0) {
                    /* try { // try from 00296054 to 00296057 has its CatchHandler @ 0029614c */
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar5 = tpidr_el0;
                    /* try { // try from 00296070 to 00296097 has its CatchHandler @ 0029614c */
      lVar5 = FUN_0035347c(*(undefined8 *)(lVar5 + 0x48));
      *(undefined1 **)(param_1 + 0x140) = &LAB_00295b28;
      *(long *)(param_1 + 0x148) = param_1;
      *(undefined8 *)(param_1 + 0x150) = 0;
      FUN_00360550(param_1 + 0x100,*(long *)(param_1 + 0xf8) + lVar5,param_1 + 0x138);
      *(undefined1 *)(param_1 + 0x130) = 1;
      puVar3 = local_50;
      goto joined_r0x0029600c;
    }
    *(undefined1 *)(param_1 + 0x131) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x131) = 0;
  }
                    /* try { // try from 00295f44 to 00295f57 has its CatchHandler @ 00296148 */
  lVar5 = FUN_0038bc70(0,0,PTR_PTR_047cc630);
                    /* try { // try from 00295f68 to 00295faf has its CatchHandler @ 00296154 */
  FUN_00298b60(local_70,local_28,local_38,local_40,local_48,local_50,lVar5);
  uVar6 = FUN_0036a600(local_70,1);
  *(undefined8 *)(param_1 + 0x38) = uVar6;
  if ((local_70[0] != (undefined8 *)0x0) && (plVar8 = (long *)*local_70[0], plVar8 != (long *)0x0))
  {
    do {
      lVar10 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (*(code *)local_70[0][3])(local_70[0][4]);
    }
  }
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_b8 = 0;
  local_c0 = 1;
  uStack_a8 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  local_b0 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined1 **)(param_1 + 0x140) = &LAB_00296200;
  *(long *)(param_1 + 0x148) = param_1;
                    /* try { // try from 00295fe8 to 00295ff3 has its CatchHandler @ 00296144 */
  iVar4 = FUN_0036cee0(*(undefined8 *)(param_1 + 0x18),&local_c0,1,param_1 + 0x138);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0029613c to 0029613f has its CatchHandler @ 00296144 */
    abort();
  }
  puVar3 = local_50;
  if (lVar5 != 0) {
                    /* try { // try from 00295ffc to 00296003 has its CatchHandler @ 00296140 */
    FUN_0038bd40(lVar5);
    puVar3 = local_50;
  }
joined_r0x0029600c:
  if (puVar3 != (ulong *)0x0) {
    local_50 = (ulong *)0x0;
    uVar11 = *puVar3;
    uVar7 = uVar11 & 1;
    if ((uVar11 & 1) == 0) {
      puVar9 = puVar3 + 1;
    }
    else {
      puVar9 = (ulong *)puVar3[1];
    }
    if ((uVar11 >> 1 != 0) && (uVar11 = uVar11 >> 1, puVar9 != (ulong *)0x0)) {
      puVar9 = puVar9 + uVar11 * 2;
      do {
        puVar9 = puVar9 + -2;
        __ptr = (void *)*puVar9;
        *puVar9 = 0;
        if (__ptr != (void *)0x0) {
                    /* try { // try from 002960e4 to 002960e7 has its CatchHandler @ 002961fc */
          free(__ptr);
        }
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      uVar7 = *puVar3 & 1;
    }
    if (uVar7 != 0) {
      FUN_0049e790(PTR_LAB_047cba48,puVar3[1]);
    }
    FUN_0049e790(PTR_LAB_047cba48,puVar3);
  }
  return;
}


